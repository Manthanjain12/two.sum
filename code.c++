class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m; // value -> index
        
        for(int i = 0; i < nums.size(); i++) {
            int remaining = target - nums[i];

            // If remaining number already exists in map
            if(m.find(remaining) != m.end()) {
                return {m[remaining], i};
            }

            // Store current number with index
            m[nums[i]] = i;
        }

        return {}; // not needed for leetcode but good practice
    }
};
