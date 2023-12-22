class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int digit = x % 10;//gives last digit of number and contuniue till first digit

          // Check for integer overflow/underflow
          if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) return 0;
          if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) return 0;
          rev = rev * 10 + digit; //used to reverse the number 
          x /= 10;
        }
        return rev;
    }
};
