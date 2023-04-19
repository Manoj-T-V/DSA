int minDeletions(string s) {
        int n=s.size();
        vector<int> v(26,0);
        for(int i=0; i<n; i++)
        {
            v[s[i]-'a']++;
        }
        sort(v.begin(),v.end(),greater<int>());
        int freq=v[0]; int cnt=0;
        for(auto it : v)
        {
            if(it>freq)
            {
                if(freq>0) 
                  cnt+=it-freq;
                else
                  cnt+=it;
            }
            freq=min(freq-1,it-1);
        }
        return cnt;
    }
