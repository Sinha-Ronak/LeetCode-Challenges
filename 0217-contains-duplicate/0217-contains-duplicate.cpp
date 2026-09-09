class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> m;
        int i = 0;
        while(m.find(nums[i]) == m.end()){
            m.insert(nums[i]);
            i++;
            if(i == nums.size()){
                return false;
            }
        }
        return true;
    }
};