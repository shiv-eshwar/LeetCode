class Solution {
public:
    int minimumDeletions(std::vector<int>& nums) {
        int n = nums.size();
        
        
        if (n == 1) {
            return 1;
        }
        
        
        int minIndex = std::min_element(nums.begin(), nums.end()) - nums.begin();
        int maxIndex = std::max_element(nums.begin(), nums.end()) - nums.begin();
        
    
        if (minIndex > maxIndex) {
            std::swap(minIndex, maxIndex);
        }
        
   
        int deleteFromFront = std::max(minIndex + 1, maxIndex + 1);
        int deleteFromBack = std::max(n - minIndex, n - maxIndex);
        int deleteBothEnds = (minIndex + 1) + (n - maxIndex);
        
    
        return std::min({deleteFromFront, deleteFromBack, deleteBothEnds});
    }
};