class Solution {
public:
    int expandcenter(string s, int i, int j) {
        int count = 0;
        while (i >= 0 && j < s.length() && s[i] == s[j]) {
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalcount = 0;
        for (int center = 0; center < s.length(); center++) {
            int i = center;
            int j = center;
            // odd length substring
            int oddpalindsubstringkacount = expandcenter(s, i, j);
            i = center;
            j = center + 1;
            // even length substring
            int evenpalindkacount = expandcenter(s, i, j);
            totalcount =
                totalcount + oddpalindsubstringkacount + evenpalindkacount;
        }
        return totalcount;
    }
};

//Expanding the center for the odd and even 
//Nice question