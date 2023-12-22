class Solution {
public:
    bool isPalindrome(int x) {
        long long last_digit, revnum = 0;
        long long num = x;
        while(x>0)
        {
            last_digit = x % 10;
            revnum = (revnum*10) + last_digit;
            x = x / 10;
        }
        if(num == revnum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};