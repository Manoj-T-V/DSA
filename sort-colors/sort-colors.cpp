class Solution {
public:
    void sortColors(vector<int>& nums) {
            int i = 0; int n = nums.size()-1;
            int mid =  0;
            
            while(mid <= n)
            {
                    if(nums[mid]==0)
                    {
                            swap(nums[mid],nums[i]);
                            i++;
                            mid++;
                    }
                    else if(nums[mid]==2)
                    {
                        swap(nums[mid],nums[n]);
                            n--;
                            cout<<"nn";
                    }
                    else
                    {
                       mid++;       
                    }
                
            }
            
        
    }
};