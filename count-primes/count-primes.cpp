class Solution {
public:
        int solve(int n)
        {
            vector<bool> seen(n, false);
        int ans = 0;
        for (int num = 2; num < n; num++) {
            if (seen[num]) continue;
            ans++;
            for (long mult = (long)num * num; mult < n; mult += num)
                seen[mult] = true;
        }
        return ans;
                
        }
    int countPrimes(int n) {
            return solve(n);
        
    }
};