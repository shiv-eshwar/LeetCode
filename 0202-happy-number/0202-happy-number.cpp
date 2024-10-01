class Solution {
public:
    bool isHappy(int n) {
           unordered_set<int> seen;  // To keep track of previously seen numbers
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);       // Add the number to the set
            n = getSumOfSquares(n); // Replace n with the sum of squares of its digits
        }
        return n == 1;            // If n becomes 1, it's a happy number
    }
    
private:
    int getSumOfSquares(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;    // Extract the last digit
            sum += digit * digit;  // Square it and add to the sum
            n /= 10;               // Remove the last digit
        }
        return sum; 
    }
};