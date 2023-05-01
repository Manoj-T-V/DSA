class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
           int n=nums.size();
            vector<int> p(n,1);
            vector<int>s(n,1);
            vector<int>a(n);
            p[0] =1;
            s[n-1] = 1;
            for(int i=1;i<n;i++)
            {
                    p[i] = p[i-1]*nums[i-1];
                    
            }
            
            for(int i = n-2 ;i>=0;i--)
            {
                    s[i] = s[i+1] * nums[i+1];
                    
            }
            
            for(int i=0;i<n;i++)
            {
                    a[i] = s[i] * p[i];
            }
        
        return a;
    }
};