class Solution {
public:
    string decodeMessage(string key, string message) {
        // Hello Moto
        unordered_map<char, char> mapping;
        char space =' ';
        mapping[space]=space;
        char start = 'a';
        int index = 0;
        while (start <= 'z' && index < key.length()) {
            char keycurrentchar = key[index];
            if (mapping.find(keycurrentchar) != mapping.end()) {
                index++;
            } else {
                mapping[keycurrentchar] = start;
                start++;
                index;
            }
        }
        string ans ="";
        for(int i=0; i<message.size(); i++)
        {
            char messagecurrentchar = message[i];
            char mappedcharacter = mapping[messagecurrentchar];
            ans.push_back(mappedcharacter);
        }
        return ans;
    }
};