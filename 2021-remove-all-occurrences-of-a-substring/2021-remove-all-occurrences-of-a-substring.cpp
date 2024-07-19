class Solution {
public:
    string removeOccurrences(string full, string pattern) {

       //jab tak pattern full string mae mil rahe hai, jab tak -1 ke equal nahi hai while loop chalta rahega 
        while(full.find(pattern)!=string::npos)
        {
            //erase karo starting index of pattern to length of  pattern 
            full.erase(full.find(pattern), pattern.length());
        }
        return full;
    }
};