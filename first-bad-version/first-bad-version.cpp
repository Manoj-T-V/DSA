// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long start =0;
        long long end = n;
        long long int result;
        while(start <= end)
            
        {
    int mid = (start + end)/2;
            if(isBadVersion(mid) == 1)
            {
                result = mid;
                end = mid-1;
                
            }
            else{
                start = mid + 1;
            }
            
            }
        return result;
    }
};