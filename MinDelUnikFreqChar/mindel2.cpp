class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>um;
        for(auto x : s)
        {
            um[x]++;
        }
        int max = INT_MIN;
        int min = INT_MAX;
        vector<int>v;
        set<int>z;
        int ans=0;
        for(auto a : um)
        {
            if(z.find(a.second) == z.end())
            {
                z.insert(a.second);
            }
            else{
                int temp= a.second;
                while( temp!=0 && z.find(temp)!=z.end())
                {
                    ans++;
                    temp--;

                }
                // if(temp ==0)
                // {
                //     ans++;
                // }
                    
                    z.insert(temp);
                
            }
        //     if(a.second < min)
        //     {
        //         min = a.second;
        //     }
        //     else if(a.second > max)
        //     {
        //         max = a.second;
        //     }
        //    v.push_back(a.second); 
        }
        
        return ans;
    }
};
