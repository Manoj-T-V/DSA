class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int , int>mp;
            vector<int>ans;
            for(auto x : nums)
            {
mp[x]++;
            }
            priority_queue<pair<int,int>>pq;            
            for(auto x : mp)
            {
                    pq.push({x.second,x.first});
}
            for(int i=0;i<k;i++)
            {
                auto x = pq.top();
                    ans.push_back(x.second);
                    pq.pop();          
            }
            
            return ans;
        
    }
};