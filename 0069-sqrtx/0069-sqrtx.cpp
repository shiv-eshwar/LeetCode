class Solution {
public:
    int mySqrt(int x) {
         if (x < 2) return x; // Return x if it's 0 or 1.

        long long left = 2, right = x / 2; // Use long long to avoid overflow.
        
        while (left <= right) {
            long long mid = left + (right - left) / 2; // Calculate mid.
            long long square = mid * mid; // Calculate mid squared.

            if (square == x) {
                return mid; // Perfect square found.
            } else if (square < x) {
                left = mid + 1; // Search in the upper half.
            } else {
                right = mid - 1; // Search in the lower half.
            }
        }

        return right; 
    }
};