class Solution {
public:
    void normalize(string &str )
    {
        unordered_map<char, char>mapping;
        char start='a';
        for(int i =0; i<str.length(); i++)
        {
            char strkacurrentchar = str[i];
            if(mapping.find(strkacurrentchar)==mapping.end())
            {
               mapping[strkacurrentchar] = start;
               start++;
            }
        }

        for(int i=0; i<str.length(); i++)
        {
            char strchar = str[i];
            char mappedchar = mapping[strchar];
            str[i] = mappedchar;
        }

    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        normalize(pattern);
        vector<string>ans;
        for(int i=0; i<words.size(); i++)
        {
            string wordsstring = words[i];
            string wordstringcopy = wordsstring;
            normalize(wordstringcopy);
            if(wordstringcopy.compare(pattern)==0)
            {
               ans.push_back(wordsstring);
            }
        }
        return ans;
    }
};