class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>prefix_max(n);
        vector<int>suffix_max(n);

        //precomputing prefix_max
        int maxi=height[0];
        for(int i=0;i<n;i++){
            if(maxi>height[i]){
                prefix_max[i]=maxi;
            }
            else{
                prefix_max[i]=height[i];
                maxi=height[i];
            }
        }

        //precomputing suffix_max
        maxi=height[n-1];
        for(int i=n-1;i>=0;i--){
            if(maxi>height[i]){
                suffix_max[i]=maxi;
            }
            else{
                suffix_max[i]=height[i];
                maxi=height[i];
            }
        }

        int ans=0;
        for(int i=0;i<n;i++){
            ans+=(min(prefix_max[i],suffix_max[i])-height[i]);
        }

        return ans;
    }
};
