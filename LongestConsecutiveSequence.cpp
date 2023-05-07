class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1)
        {
            return nums.size();
        }
        sort(nums.begin(),nums.end());
        int ans=0;
        int max =0;
        for(int i =0;i<nums.size()-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                continue;
            }
          
            if(nums[i] == nums[i+1]-1)
            {
                    max++;
            }
            else{
                max=0;
            }
            ans = max>=ans?max:ans;

        }
        return ans+1;
        
    }
};
