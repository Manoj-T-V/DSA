//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
       
        int maxHere = 0;
        int max_so_far = INT_MIN;
        for(int i=0; i<n ;i++)
        {
         maxHere += arr[i];
         if(maxHere > max_so_far)
         {
             max_so_far = maxHere;
         }
         if(maxHere < 0)
         {
             maxHere =0;
         }
        }
        
        // Your code here
        return max_so_far;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends