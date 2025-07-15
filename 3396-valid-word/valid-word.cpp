class Solution {
public:
    bool isValid(string word) {
    int n = word.length();
    if (n < 3) return false;

    int vowelCount = 0;
    int consonantCount = 0;

    for (int i = 0; i < n; i++) {
        char c = word[i];

        if (!isalnum(c)) 
            return false;
           
        if (isalpha(c)) {
             if (c == 'a' || c == 'e' || c == 'i' || 
                     c == 'o' || c == 'u' || c == 'A' || 
                     c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vowelCount++;
            }
            else
                consonantCount++;
            }
        }
     return (vowelCount >= 1 && consonantCount >= 1);
}
};