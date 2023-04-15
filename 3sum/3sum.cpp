class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                if (j > i+1 && nums[j] == nums[j-1]) {
                    j++;
                    continue;
                }
                if (k < nums.size()-1 && nums[k] == nums[k+1]) {
                    k--;
                    continue;
                }
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    // vector<int> a;
                    // a.push_back(nums[i]);
                    // a.push_back(nums[j]);
                    // a.push_back(nums[k]);
                    // ans.push_back(a);
                        ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                } else if (sum < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return ans;
    }
};
