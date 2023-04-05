class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ms = INT_MIN;
        int mh = 0;
        int b=0,e=0;
        for(int i=0;i<nums.size();i++)
        {
            mh+=nums[i];
            if(ms < mh)
            {
            ms= mh;    
            }
            if(mh < 0)
            {
                mh =0;
            }
        }
        return ms;
    }
};