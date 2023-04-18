class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        
        for(int i=0;i<s.size();i++)
        {
            
                m[s[i]]++;
        }
       priority_queue<pair<int,char>> pq;
       for(auto x : m)
       {
           pq.push({x.second, x.first});
       }
        s.erase();
       while(!pq.empty())
       {
           auto x = pq.top();
           pq.pop();
            s+=string(x.first,x.second);
       }
      return s;
    }
};
