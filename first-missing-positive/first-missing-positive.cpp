class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
            if(nums.size()==1)
            {
                    if(nums[0] ==1)return 2;
                    return 1;
            }
            unordered_map<int,int>um;
            int max = *max_element(nums.begin(), nums.end());
            for(auto x : nums)
            {
                    um[x]++;
            }
            cout << um.size();
            if(um.size()==1)
            {
                    if(um[1]!=0)return 2;
                    return 1;
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