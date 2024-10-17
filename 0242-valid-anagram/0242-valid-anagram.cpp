class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        if(n1!=n2)
        {
            return false;
        }
        int hashtables[256]={0};
        for (int i = 0; i < n1; i++) {
            hashtables[s[i]]++;
        }
        for (int i = 0; i < n2; i++) {
            hashtables[t[i]]--;
        }
        for (int i = 0; i < 256; i++) {
            if (hashtables[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//        sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         if(s!=t){
//             return false;
//         }
//         return true;

//     }
// };