class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
            vector<int> ans;
            vector<int>answer;
            unordered_map<int,int>um;
            for(auto x : nums)
            {
                um[x]++;
            }
            for(auto x : um)
            {
                    ans.push_back(x.second);
            }
           sort(ans.begin(),ans.end(),greater<>());
           for(int i=0;i<k;i++)
           {
                   for(auto it = um.begin();it!=um.end();it++)
                   {
                if(it->second == ans[i])
                {
                        answer.push_back(it->first);
                }
                   }
           }
            set<int>s{answer.begin(),answer.end()};
            answer.clear();
            for(auto x : s){
answer.push_back(x);
            }
          return answer;  
    }
};