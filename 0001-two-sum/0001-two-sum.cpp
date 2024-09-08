class Solution {
public:

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> result; // Initialize result vector
    
    int s = nums.size();
    for (int i = 0; i < s; i++) {
        for (int j = i + 1; j < s; j++) {
            if ((nums[i] + nums[j]) == target) {
                result.push_back(i); 
                result.push_back(j); 
                std::cout << "[" << i << "," << j << "]" << std::endl;
                return result; // Return the result when the pair is found
            }
        }
    }
    
    return result; // Return empty vector if no pair is found
}

    
};