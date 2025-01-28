class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());  // Sort the array
    
    for (int i = 0; i < nums.size(); i++) {
        // Skip duplicate elements to avoid repeating the same triplets
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int target = -nums[i];  // We need two numbers that sum up to -nums[i]
        int left = i + 1, right = nums.size() - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) {
                result.push_back({nums[i], nums[left], nums[right]});
                
                // Skip duplicates for the second and third elements
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;
                
                left++;
                right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}
};