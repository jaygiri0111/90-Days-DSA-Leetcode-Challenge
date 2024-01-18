// //Approach - 01 (Brute force)--> O(n^2)
// //Not all case test will pass because in question is mention Algorithm must run in O(n)
// class Solution {
// public:
//      bool ls(vector<int>& nums, int x)
//      {
//          int n = nums.size();
//          for(int i = 0; i<n; i++)
//          {
//             if(nums[i]==x)
//             {
//                 return true;
//             }
//          }
//          return false;
//      }
//     int longestConsecutive(vector<int>& nums) {
//         int count = 0 , n = nums.size(), longest = 1;
//         if(n==0) return 0;
//         for(int i = 0; i<n; i++)
//         { int x = nums[i];
//           count = 1;
//           while(ls(nums, x+1)==true)
//           {
//               x = x+1;
//               count++;
//           }
//             longest = max(longest,count);
//         }
//         return longest;
//     }
// };

//Approach - 02 (Better Solution)--->O(nlogn)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 0 , n = nums.size(), lastsmall = INT_MIN, longest = 1;
        sort(nums.begin(), nums.end());
        if(n==0) return 0;
        for(int i = 0; i<n; i++)
        {
            if(nums[i]-1 == lastsmall)
            {
               count++;
               lastsmall = nums[i];
            }
            else if(nums[i]!=lastsmall)
            {
                count = 1;
                lastsmall = nums[i];
            }

            longest = max(longest, count);
        }

        return longest;
       
    }
};