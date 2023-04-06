class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int j=0;
        sort(strs.begin(), strs.end());
        string ans = "";
        int n = strs.size();
        int i=0;
        while(i < strs[0].size() && strs[0][i]==strs[n-1][i])
        {
            ans.push_back(strs[0][i]);
            i++;
        }
        return ans;
    }
};




