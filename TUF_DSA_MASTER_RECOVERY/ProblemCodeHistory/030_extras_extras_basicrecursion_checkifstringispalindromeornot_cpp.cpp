class Solution {
public:
    bool palindromeCheck(string& s, int i) {
        int n = s.size();

        // Base case
        if (i >= n / 2) {
            return true;
        }

        // Check characters
        if (s[i] != s[n - i - 1]) {
            return false;
        }

        // Recursive call
        return palindromeCheck(s, i + 1);
    }
};
