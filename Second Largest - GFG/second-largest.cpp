//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    set<int> m ;
	    for(int i =0;i<n;i++)
	    {
	        m.insert(arr[i]);
	    }
	    vector<int>v;
	    for(auto x : m)
	    {
	        v.push_back(x);
	    }
	    
	    int l=v.size();
	    if(l==1) return -1;
	    return v[l-2];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends