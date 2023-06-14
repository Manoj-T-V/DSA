class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        
        unordered_set<int> s(nums.begin(), nums.end()); // create an unordered set of the numbers in the vector
        
        int longestSeq = 1; // initialize the length of the longest consecutive subsequence to 1
        
        for (int num : nums) {
            if (s.find(num-1) != s.end()) {
                // if num-1 exists in the set, then num is not the start of a new subsequence
                continue;
            }
            
            int currSeq = 1; // initialize the length of the current consecutive subsequence to 1
            
            // count the length of the consecutive subsequence starting with num
            while (s.find(num+1) != s.end()) {
                num++;
                currSeq++;
            }
            
            // update the length of the longest consecutive subsequence found so far
            longestSeq = max(longestSeq, currSeq);
        }
        
        return longestSeq;
    }
};
