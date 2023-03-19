class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        cin.tie(0);
    ios::sync_with_stdio(0);
        set<int>s;
        for(auto x : nums)
        {
            if(s.find(x)!=s.end())
            {
                return true;
            }
          s.insert(x);
        }   
        return false;
        
    }
};