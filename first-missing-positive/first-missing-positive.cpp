class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
            unordered_map<int,int>um;
            int max = *max_element(nums.begin(), nums.end());
            for(auto x : nums)
            {
                    um[x]++;
            }
            for(int i=1;i<=um.size();i++)
            {
                    if(um[i] == 0)
                    {
                        return i;
                    }     
            }
        return max+1;
    }
};