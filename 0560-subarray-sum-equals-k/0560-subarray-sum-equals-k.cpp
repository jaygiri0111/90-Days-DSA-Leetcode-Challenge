// //Approach - 01 (BruteForce)--->O(n^3)--->May be Can show TLE
// //GO For 2nd or 3rd Approach below
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();
//         int count =0;
//         for(int i=0; i<n; i++)
//         {   
//           for(int j=i; j<n; j++)
//           {
//               int sum = 0;
//               for(int k = i; k<=j; k++)
//               {
//                sum+=nums[k];
                  
//               }
              
//               if(sum == k)
//                {
//                  count++;
//                }
              
//           }
//         }
//         return  count;
//     }
// };


//Approach - 02 (Better Solution)--->O(n^2)
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count =0;
        for(int i=0; i<n; i++)
        {
            int sum = 0;
          for(int j=i; j<n; j++)
          {
             sum+=nums[j];
          
            if(sum == k)
            {
              count++;
            }
              
          }
        }
        return  count;
    }
};