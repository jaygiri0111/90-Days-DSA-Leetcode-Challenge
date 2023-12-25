class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
       while(start<=end)
       {
           if(!isalnum(s[start]))  // Check if the character at 'start' is not alphanumeric.
           {
               start++;            // Increment 'start' to move to the next character.
               continue;            // Skip to the next iteration of the loop
           }
           else if(!isalnum(s[end]))
           {
               end--;
               continue;
           }
           else if(tolower(s[start])!=tolower(s[end])) // Check if the lowercase characters at 'start' and 'end' positions are not equal.
           {
               return false;
           }
           else                     // If characters are equal:
           {
               start++;
               end--;
           }
       }
       return true;
    }
};