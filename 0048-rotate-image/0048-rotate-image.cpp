// //Approach - 01(Brute Force) 
// class Solution {
// public:
//     vector rotate(vector<vector<int>>& matrix) {
//        int n = matrix.size();
//        vector<vector<int>> ans(n, vector<int>(n, 0));  // Initialize ans with the same dimensions as matrix
       
//        for(int i=0; i<n; i++) 
//        {
//            for(int j=0; j<n; j++) 
//            {
//               ans[j][n-1-i] = matrix[i][j];
//            }
//        }
//          return ans;
//     }
// };


//Approach -02
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
   {
       int n = matrix.size();
       vector<vector<int>> ans(n, vector<int>(n, 0));  // Initialize ans with the same dimensions as matrix
       
       for(int i=0; i<n; i++) 
       {
           for(int j=0; j<i; j++) 
           {
              swap(matrix[i][j], matrix[j][i]);
           }
       }

       for (int i=0; i<n; i++)
       {
           reverse(matrix[i].begin(), matrix[i].end());
       }
   }
};