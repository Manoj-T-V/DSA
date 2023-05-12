class Solution {
public:
    void solve(int idx,vector<int> &ans,vector<vector<int>> &v,vector<int>& candidates, int target){
        if(idx == candidates.size()){ // Base Condition if index reaches to end of available elements
            if(target == 0){ // If target value is reached then push the ans to vector v
                v.push_back(ans);
            }
            return; // Return when reached to end index 
        }
        if(target>=candidates[idx]){
            ans.push_back(candidates[idx]);
            solve(idx,ans,v,candidates,target-candidates[idx]); // Reducing target to zero and keeping index at same position
            ans.pop_back();
        }
        solve(idx+1,ans,v,candidates,target); // Moving the index forward for exploring other options
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <int> ans; // Vector to store the evaluate single answers
        vector <vector<int>> v; // Vector of vector to store answer vectors
        solve(0,ans,v,candidates,target);
        return v;
    }
};
