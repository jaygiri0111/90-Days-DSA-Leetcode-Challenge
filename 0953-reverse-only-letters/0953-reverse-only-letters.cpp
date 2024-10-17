class Solution {
public:
    bool isalphabet(char ch) {
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
            return true;
        }
        return false;
    }
    string reverseOnlyLetters(string s) {
        int n = s.size();
        int i = 0, j = n - 1;
        while (i <= j) {
            if (isalphabet(s[i]) && isalphabet(s[j])) {
                swap(s[i], s[j]);
                i++;
                j--;
            } else if (!isalphabet(s[i])) {
                i++;

            } else {
                j--;
            }
        }
        return s;
    }
};