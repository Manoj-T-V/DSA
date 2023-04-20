class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
            vector<int>ans = {-1,-1};
            int start =0;
            int end = nums.size()-1;
            int first = -1;
            int mid = (start+end)/2;
            //cout<<mid <<" " << end;
            while(start <= end)
            {
                if(target < nums[mid]){
                        end = mid-1;
                }
                    else if(target > nums[mid])
                    {
                            start = mid+1;
                    }
                    else{
                           first = mid ;
                            end = mid-1;
                    }
                  mid = (start+end)/2;      
            }
            
            if(first == -1) return ans;
            else if(first != -1) ans[0] = first;
            
            start = 0;
            end = nums.size()-1;
            mid = (start+end)/2;
            int last =first;
            while(start <= end){
                if(target < nums[mid]){
                        end = mid-1;
                }
                    else if(target > nums[mid])
                    {
                            start = mid+1;
                    }
                    else{
                           last = mid ;
                            start = mid+1;
                    }
                    mid = (start+end)/2;   
            }
            ans[1] = last;
            return ans;
           
    }
};