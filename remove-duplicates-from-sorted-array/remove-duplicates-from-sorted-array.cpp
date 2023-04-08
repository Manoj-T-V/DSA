class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      set<int>s;
        
    for(auto x: nums)
    {
        s.insert(x);
    }
        nums.clear();
        for(auto c : s)
        {
           nums.push_back(c);
        }
        return nums.size();
    }
};