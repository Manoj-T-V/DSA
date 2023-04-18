class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
            unordered_map<string, vector<string>> um;
            for(auto x : strs)
            {

                    string temp = x;
                    sort(x.begin(),x.end());
                    um[x].push_back(temp);
                   
            }
            vector<vector<string>>ans;
            
            for(auto a : um)
            {
                    ans.push_back(a.second);
            }
            
            return ans;
            
        
    }
};