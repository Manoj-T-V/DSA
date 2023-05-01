class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back({});
        for(auto x : nums)
        {
            int n = ans.size();
            for(int i =0;i<n;i++)
            {
                vector<int>temp {ans[i].begin(),ans[i].end()};
                temp.push_back(x);
                ans.push_back(temp);
            }
        }
        return ans;
        
    }
};