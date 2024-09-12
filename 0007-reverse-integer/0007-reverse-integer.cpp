class Solution {
public:
int reverse(int x) {
    int ans = 0;
    while (x != 0) {
        int rem = x % 10;
        x /= 10;

        // Check for overflow before it happens
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && rem > 7)) return 0; // Overflow for positive numbers
        if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && rem < -8)) return 0; // Overflow for negative numbers

        ans = ans * 10 + rem;
    }
    return ans;
}
};