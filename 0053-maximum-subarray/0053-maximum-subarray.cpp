//Approach - 01(Brute Force) Time complexity - O(n^2)
/*class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        for(int i = 0; i<n; i++)
        { int sum = 0;
           for(int j =i; j<n; j++)
           {
             sum += nums[j];
             maxi = max(sum, maxi);
           }
        }
        return maxi;
    }
};
*/
//Approach -02  (Optimal Solution) Time complexity - O(n)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        int maxi = nums[0];
        for(int i = 0; i<n; i++)
        {
         sum = sum + nums[i];
         maxi = max(sum,maxi);
         if(sum < 0) 
         {
             sum = 0;
         }
        }
        return maxi;
    }
};
































