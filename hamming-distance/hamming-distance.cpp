class Solution {
public:
    int hammingDistance(int x, int y) {
        int k = x^y;
         int ans =0;
            while(k>0)
            {
                if(k&1)
                    {ans++;}
                    k = k>>1;
            }
            return ans;
    }
};