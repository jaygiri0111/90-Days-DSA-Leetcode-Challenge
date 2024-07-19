class Solution {
public:
    bool checkpalindrome(string str, int s, int e) {
        while (s <= e) {
            if (str[s] == str[e]) {
                s++;
                e--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while (i <= j) {
            // if same
            if (s[i] == s[j]) {
                i++;
                j--;
            }
            // if different
            else {
                //deleting ith index and checking for palindrome
                bool ansOne = checkpalindrome(s, i + 1, j);
                //deleting jth index and checking for palindrome
                bool ansTwo = checkpalindrome(s, i, j - 1);
                //checking which part is valid palindrome
                bool finalAns = ansOne || ansTwo;
                return finalAns;
            }
        }
        return true;
    }
};