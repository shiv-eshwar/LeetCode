class Solution {
public:
    void backtrack(vector<int>& nums, vector<vector<int>>& result, int start) {
    // If we've considered all elements, add the current permutation to the result
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }

    // Loop through the array and swap elements to create different permutations
    for (int i = start; i < nums.size(); ++i) {
        // Swap the current element with the start element
        swap(nums[start], nums[i]);
        
        // Recurse with the next element fixed
        backtrack(nums, result, start + 1);
        
        // Backtrack, swap the elements back
        swap(nums[start], nums[i]);
    }
}

// Function to return all permutations
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    backtrack(nums, result, 0);
    return result;
}
    
};