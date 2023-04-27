class Solution {
public:
        
        int f(vector<int>& nums, int i, vector<int>& arr)
        {
                if(i<0)
                {
                        return 0;
                }
                if(arr[i] > -1)
                {
                    return arr[i];    
                }
                
          int result = max(f(nums, i-2, arr)+nums[i], f(nums,i-1,arr));
                arr[i] = result;
                return result;
        }
    int rob(vector<int>& nums) {
            vector<int> arr(nums.size(),-1);
        int ans = f(nums,nums.size()-1,arr);
        
        return ans;
    }
};