class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hashmap[255]={0};
        bool isboolhashmap[255]={0};
        if(s.size()!=t.size())
        {
            return false;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(hashmap[s[i]]==0 && isboolhashmap[t[i]]==0)
            {
                hashmap[s[i]]=t[i];
                isboolhashmap[t[i]]=1;
            }
        }

        for(int i=0; i<s.size(); i++)
        {
            if(hashmap[s[i]]!=t[i])
            {
                return false;
            }
        }
        
        return true;
    }
};