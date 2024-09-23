class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int n = nums.size();
        int i = n - 2;

        // Find the first decreasing element
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        // then, find the next greater element and swap them
        if (i >= 0) {
            int j = n - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }

        // then Reverse the elements to the right of the pivot
        reverse(nums.begin() + i + 1, nums.end());
    }
    
};