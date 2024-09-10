class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        std::vector<int> combinedarray;
       
        combinedarray.insert(combinedarray.end(), nums1.begin(), nums1.end());
         combinedarray.insert(combinedarray.end(), nums2.begin(), nums2.end());
        
        std::sort(combinedarray.begin(), combinedarray.end());
        
        int n= combinedarray.size();
    if (n==0){
        return 0;
    }
        if (n%2==1){
            return combinedarray[n/2];
        }
        else{
            return (combinedarray[(n/2)-1]+ combinedarray[n/2])/ 2.0;
        }
    }
};