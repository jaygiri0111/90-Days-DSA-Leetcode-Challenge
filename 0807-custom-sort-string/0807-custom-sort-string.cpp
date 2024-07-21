string ordercopy;
class Solution {
public:
    static bool cmp(char a, char b){
    
    return (ordercopy.find(a)<ordercopy.find(b));

   }
    string customSortString(string order, string s) {
       ordercopy = order;
       sort(s.begin(),s.end(),cmp);
       return s;
    }
};


// class Solution {
// public:
//     string customSortString(string order, string s) {
//         string ans="";
//         int m  = s.length();
//         int n  = order.length();
    
//         for(int i=0; i<s.length(); i++)
//         {
//           int index=0;
//             for(int j=0; j<order.length(); j++)
//             {
//                 if(s[i]==order[j])
//                 {
//                     index=j;
//                 }
//             }
//             ans.push_back(s[index]);
            
//         }
//         return ans;
//     }
// };