class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0; i<strs[0].size(); i++)
        {
            char curr_ch = strs[0][i];
            bool match = true;
            for(int j=1; j<strs.size(); j++)
            {
                if(strs[j].size()<i||curr_ch!=strs[j][i])
                {
                    match = false;
                    break;
                }
            }
            if(match ==false)
            {
               break;
            }
            else
            {
                ans.push_back(curr_ch);
            }
        }
        return ans;
    }
};