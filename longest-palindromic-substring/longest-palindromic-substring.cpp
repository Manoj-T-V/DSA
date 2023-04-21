class Solution {
public:
    string longestPalindrome(string s) {
            int n = s.length();
            int maxlen =0;
            int start = 0;
            for(int i=0;i<n;i++){
                int l = i, r=i;
                    while(l>=0 && r < n && s[l] == s[r])
                    {
                            l--;
                            r++;
                    }
                    int len = r -l -1;
                    if(maxlen < len)
                    {
                            maxlen = len;
                            start = l+1;
                    }
                    
                    l =i, r = i+1;
                    while(l>=0 && r<n && s[l]  == s[r])
                    {
                        l--;
                            r++;
                            
                    }
                     len = r -l -1;
                    if(maxlen < len)
                    {
                            maxlen = len;
                            start = l+1;
                    }
                    
            }
            
            return s.substr(start,maxlen);
        
    }
};