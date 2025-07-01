class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.size(), ans = 1;
        for (int i = 1; i < n; ++i) {
            if (word[i - 1] == word[i]) {
                ++ans;
            }
        }
        return ans;
    }
    // in this if we find the same letter (w[i-1]==w[i]) 
    // then we will increase the value of ans by 1
    // this will be done till the last letter.
};