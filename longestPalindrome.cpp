class Solution {
public:
    string longestPalindrome(string s) 
    {
        int size = s.size();
        if (size <= 1) return s;

        int maxLength = 1;
        int start = 0;

        for (int i = 0; i < size; ++i) {
            for (int j = i; j < size; ++j) {
                bool isPalindrome = true;
                
                for (int k = 0; k <= (j - i) / 2; ++k) {
                    if (s[i + k] != s[j - k]) {
                        isPalindrome = false;
                        break;
                    }
                }
                
                if (isPalindrome && (j - i + 1) > maxLength) {
                    start = i;
                    maxLength = j - i + 1;
                }
            }
        }

        return s.substr(start, maxLength);
    }
};
