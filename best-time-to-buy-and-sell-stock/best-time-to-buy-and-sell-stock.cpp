class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
        int ms = INT_MAX;
        int mpn =0;
        int mpo =0;
        int b=-1,s=-1;
        int i = 0;
        for(int i=0;i<prices.size();i++)
        {
                if(prices[i] < ms)
                {
                    ms = prices[i];
                }
            mpn = prices[i] - ms;
            if(mpo < mpn)
            {
                mpo = mpn;
            }
        }
        return mpo;
    
    }
};