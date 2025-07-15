class Solution {
public:
    bool isSubsequence(string s, string t) {
      
    int n = s.length();
    int m = t.length();

    int j = 0; 

    for (int i = 0; i < n; i++) {
        //checking in t, if we found same value
        while (j < m && t[j] != s[i]) {
            j++; 
        }

        //no value found
        if (j == m) return false; 

        j++; //moving to find next s[i+1] only after we found s[i]
    }

    return true; 

        }
};