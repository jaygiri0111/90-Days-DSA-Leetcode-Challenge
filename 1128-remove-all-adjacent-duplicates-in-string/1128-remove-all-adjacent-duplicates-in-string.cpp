class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int n = s.length();
        for(int i =0; i<n; i++)
        {
            char currentcharacter = s[i];
            if(ans.empty())
            {
                ans.push_back(currentcharacter);
            }
            else if(currentcharacter==ans.back())
            {
                ans.pop_back();
            }
            else if(currentcharacter!=ans.back())
            {
                ans.push_back(currentcharacter);
            }
        }
        return ans;
    }
};