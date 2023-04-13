class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
            int sum =1;
            vector<int> ans;
            for(int i=digits.size()-1;i>=0;i--)
            {
                    int k = digits[i]+sum;
                if( k >= 10)
                {
                        sum = 1;
                        int l = k%10;
                        ans.push_back(l);
                }
                    else{
                        sum =0;
                            ans.push_back(k);
                    }
                 
            }
            if(sum == 1)
            {
                ans.push_back(1);
            }
            reverse(ans.begin(),ans.end());
            return ans;
        
    }
};