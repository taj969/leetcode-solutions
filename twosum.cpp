class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen; // Map to store numbers and their indices

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // Calculate the complement

            // Check if the complement is already in the map
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i}; // Return the indices
            }

            // Otherwise, store the current number and its index
            seen[nums[i]] = i;
        }

        return {}; // Return an empty vector if no solution is found
    }
};
