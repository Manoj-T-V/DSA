class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        for(int k=0;k<m;k++)
        {
            ans.push_back(nums1[k]);
        }
       nums1.clear();
        int i =0, j=0;
        while(i<m && j< n)
        {
        if(ans[i]<nums2[j])
        {
            nums1.push_back(ans[i]);
            i++;
        }
        else{
            nums1.push_back(nums2[j]);
            j++;
        }
        
        }
        
        for(;i<m;i++)
        {
            nums1.push_back(ans[i]);
            
        }
        
        for(;j<n;j++)
        {
            nums1.push_back(nums2[j]);
        }
        
        
    }
};