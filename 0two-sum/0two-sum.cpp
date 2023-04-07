class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int compliment;
        for(int i =0;i<nums.size();i++)
        {
            compliment = target - nums[i];
            if(m.count(compliment)!=0)
            {
              return {i,m[compliment]};
                
            }
            else{
                m[nums[i]] = i;
            }
            
            
        }
        return {};
    }
};