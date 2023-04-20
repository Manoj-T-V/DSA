class Solution {
public:
    int findPeakElement(vector<int>& nums) {
            if(nums.size()==1)return 0;
            if(nums[0]>nums[1])
            {
                    return 0;
            }
            else if (nums[nums.size()-1]>nums[nums.size()-2])
            {
                    return nums.size()-1;
            }
            
            int i;
            int j ;
            int k ;
            for(int i=1;i<nums.size();i++)
            {
                    j=i-1;
                    k=i+1;
             if(nums[i]>nums[j] && nums[i]>nums[k])
             {
                     cout <<i<<j<<k;
                return i;
             }
            }
        return -1;
    }
};