class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um = {{nums[0], 0}};

        for(int i = 1;i < nums.size();i++)
        {
            int complement = target - nums[i];
            if(um.find(complement) == um.end()){
                um[nums[i]] = i;
            }
            else{
                return {um[complement], i};
            }
        }
        return {};
    }
};