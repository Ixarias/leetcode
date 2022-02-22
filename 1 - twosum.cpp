class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++) {
            int needed = target - nums[i];
            if(map.find(needed) != map.end()) {
                result = {map[needed], i};
                break;
            }
            map[nums[i]] = i;
        }
        return result;
    }
};