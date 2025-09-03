class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      vector<int> lastIndex(256, -1); // store last index of each character
        int maxLen = 0, start = -1;     // start is the left boundary of window

        for (int i = 0; i < s.size(); i++) {
            // if character was seen, update start to avoid duplicates
            if (lastIndex[s[i]] > start) {
                start = lastIndex[s[i]];
            }
            lastIndex[s[i]] = i; // update last seen index
            maxLen = max(maxLen, i - start);
        }

        return maxLen;  
    }
};