class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r = *max_element(piles.begin(),piles.end());
        
        if(h==piles.size()) return r;
        int res = r;
        while(l<=r){
            int mid = (l+r)/2;
            
            long long int hours = 0;
            for(auto x : piles)
            {
                hours += ceil((double) x / mid);
            }   
            
            if(hours <= h)
            {
                res = min(res,mid);
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return res;

        
    }
};
