public class Solution {
    
    public int reverseBits(int n) {
     int reversed = 0;

        for (int i = 0; i < 32; i++) {
            // Get the last bit of n
            int bit = (n >> i) & 1;
            // Add it to the reversed integer
            reversed |= (bit << (31 - i));
        }

        return reversed;   
    }
}