class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
            std::sort(nums.begin(), nums.end());
        int missing = 1;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (nums[i] == missing) missing++;
        }
        return missing;
    }
};