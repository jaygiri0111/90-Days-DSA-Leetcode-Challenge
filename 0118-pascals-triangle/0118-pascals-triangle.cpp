class Solution {
public:
    vector<int>pascaltriangle(int row)
    {
        //Print the Row 
        long long ans = 1;
        vector<int>ansrow;
        ansrow.push_back(1);
        for(int col = 1; col<row; col++)
        {
            ans =ans*(row-col);
            ans = ans/col;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1; i<=numRows; i++)
        {
            ans.push_back(pascaltriangle(i));
        }
    return ans;
    }

/*Output 
1 
1 1
1 2 1
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1
*/
};