// //Approach - 01 (Brute Force)
// class Solution {
// public:
//     void markrow(vector<vector<int>>&  matrix,int i)
//     {  // int n = matrix.size();//--->column
//        int m = matrix[0].size(); //--->Row
//        int count=0;
//         for(int j=0; j<m; j++)
//         {
//             if(matrix[i][j]!=0)
//             {
//                 matrix[i][j]=-1;
              
//             }
//         }
//     }
//       void markcolumn(vector<vector<int>>&  matrix,int j)
//     {   int n = matrix.size();
//       int count =0;
//         for(int i=0; i<n; i++)
//         {
//             if(matrix[i][j]!=0)
//             {
//                 matrix[i][j]=-1;
//             }
//         }
//     }
//     void setZeroes(vector<vector<int>>& matrix) {
//         int n = matrix.size();;//--->column
//         int m = matrix[0].size(); //-->Row
//         for(int i=0; i<n; i++)
//         {
//             for(int j=0; j<m; j++)
//             {
//                 if(matrix[i][j]==0)
//                 {
//                    markrow(matrix, i);
//                    markcolumn(matrix,j);
//                 }
//             }
//         }
            
     
//         for(int i=0; i<n; i++)
//         {
//             for(int j=0; j<m; j++)
//             {
//                 if(matrix[i][j]==-1)
//                 {
//                     matrix[i][j]=0;
//                 }
//             }
//         }
//     }
// };

//Approach - 02 (Better solutin) using space
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();;//--->column
        int m = matrix[0].size(); //-->Row
         vector<int> row(m, 0);  
          vector<int> col(n, 0); 
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(matrix[i][j]==0)
                {
                  row[j]=1;
                  col[i]=1;
                }
            }
        }
            
     
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(row[j]||col[i])
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};