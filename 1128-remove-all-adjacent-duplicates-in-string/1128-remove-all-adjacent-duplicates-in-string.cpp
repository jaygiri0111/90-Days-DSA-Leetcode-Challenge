class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        string ans ="";
        for(int i =0; i<n; i++)
        {
            char currentchar = s[i];
            if(ans.empty())
            {
              ans .push_back(currentchar);
            }
            else if(ans.back()!=currentchar)
            {
                ans.push_back(currentchar);
            }
            else if(ans.back()==currentchar)
            {
                ans.pop_back();
            }
        }
        return ans;
    }
};