class Solution {
public:
    int lengthOfLongestSubstring(string s) {
           
            
            int ans=0;
            for(int i=0;i<s.size();i++)
            {
                    int max=0;
                    unordered_map<char,int>m;
                    for(int j=i;j<s.size();j++)
                    {
                    if(m.find(s[j])==m.end())
                    {
                       max++;     
                       m[s[j]]++;
                    }
                    else{
                            break;
                    }
                    }
                    m.clear();
                    ans = max>ans?max:ans;
            }
//         for(int i=0;i<s.size();i++){
                
//         }
            return ans;
    }
};