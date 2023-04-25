class Solution {
public:
    int majorityElement(vector<int>& nums) {
            priority_queue<pair<int,int>>pq;
            unordered_map<int,int>umap;
            for(auto x : nums)
            {
                    umap[x]++;
              
            }
            for(auto y : umap)
            {
                    pq.push(make_pair(y.second, y.first));
            }
        return pq.top().second;
    }
};