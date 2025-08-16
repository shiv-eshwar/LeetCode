class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> result;
    result.push_back(0); // Start with 0 as the first element
    for (int i = 0; i < n; ++i) {
        int size = result.size();
        // Generate new numbers by adding 1 << i to the existing numbers in the result
        for (int j = size - 1; j >= 0; --j) {
            result.push_back(result[j] | (1 << i));
        }
    }
    return result;
}
};