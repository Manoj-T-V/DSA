class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        int ss = s.size();
        int ts = t.size();
        if(ss!=ts)return false;
        for(int i = 0;i<ss;i++)
        {
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
            
        }
        
        for(int i =0;i<26;i++)
        {
            if(arr[i]!=0)
            {
                return false;
            }
        }
        return true;
        
    }
};