class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l =0, r= nums.size()-1; int ans;
        while(l<=r){
            int mid = l+ (r-l)/2; // here we break the array into two half and find the mid so if the target == mid then we are returning mid else if the mid > target then r= mid-1 else l- mid +1, and if not we are returning -1;

            if (nums[mid]== target){
                return mid;
            }
            else if(nums[mid]> target){
                r= mid-1;
            }
            else (l= mid +1);
        }
        return -1;
    }
};