class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
    int n = nums.size();
    int closestSum = nums[0] + nums[1] + nums[2]; // Initialize the closest sum with the first triplet sum
    
    // Iterate through the array
    for (int i = 0; i < n - 2; ++i) {
        int left = i + 1, right = n - 1;
        
        while (left < right) {
            int currentSum = nums[i] + nums[left] + nums[right];
            
            // If we find a sum closer to the target, update closestSum
            if (abs(currentSum - target) < abs(closestSum - target)) {
                closestSum = currentSum;
            }
            
            // Move the pointers based on comparison with target
            if (currentSum < target) {
                ++left; // We need a larger sum, so move left pointer right
            } else if (currentSum > target) {
                --right; 
            } else {
                return currentSum; 
            }
        }
    }
    
    return closestSum;
    }
};