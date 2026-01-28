class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        int n= nums.size();
        for (int i=0; i < n; i++){ // here we use the bitwise xor as initilize with the ans as 0 and we know that as if we do the xor with same number it will give 0 else gives same number if done with the 0
            ans = ans^nums[i];
        }
        return ans;
    }
};