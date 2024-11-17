class Solution {
public:
    string reverseWords(string s) {
       stringstream ss(s);
       vector<string>ans;
       string word;
       while(ss>>word)
       {
        ans.push_back(word);
       }
       reverse(ans.begin(),ans.end());
       string result="";
       for(int i=0; i<ans.size(); i++)
       {
        result+=ans[i];
        if(i<ans.size()-1)
        {
            result+=" ";
        }
       }
       return result;
    }
};