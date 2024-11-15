class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
int n = arr.size();
    
    // Step 1: Find the longest non-decreasing prefix
    int left = 0;
    while (left + 1 < n && arr[left] <= arr[left + 1]) {
        left++;
    }
    
    // If the entire array is non-decreasing, return 0
    if (left == n - 1) {
        return 0;
    }
    
    // Step 2: Find the longest non-decreasing suffix
    int right = n - 1;
    while (right - 1 >= 0 && arr[right] >= arr[right - 1]) {
        right--;
    }
    
    // Step 3: The shortest subarray to remove will be between the boundaries `left` and `right`.
    int result = min(n - left - 1, right); // Remove elements from the beginning or end
    
    // Step 4: Try to extend the left part by finding the first element that can merge with the suffix.
    for (int i = 0; i <= left; i++) {
        while (right < n && arr[i] > arr[right]) {
            right++;
        }
        if (right < n) {
            result = min(result, right - i - 1);
        }
    }
    
    return result;
} 
    
};