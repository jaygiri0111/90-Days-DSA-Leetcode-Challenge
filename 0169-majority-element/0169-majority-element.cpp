/* Time complexity = O(n^2)
   This solution may face TLE(Time Limit Exceed) Problem 
*/
/*class Solution {
public:
    int majorityElement(vector<int>& nums) {
    
        int n = nums.size();
        for(int i=0; i<n; i++)
        {  
            int count =0;
            for(int j = 0; j<n; j++)
            {
                if(nums[i]==nums[j])
                {
                    count++;
                }
            }
            
            if(count > n/2)
            {
            return nums[i];
            }
        }
         return -1;
    }
};

*/


/*Approach - 02 (Better Solution)
  Time Complexity - O(nlogn)
*/
/*class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n = nums.size();
     map<int, int>mp;
     for(int i=0; i<n; i++)
     {
         mp[nums[i]]++;
     } 
    for(auto it : mp)
    {
        if(it.second>nums.size()/2)
        {
            return it.first;
        }
    }  
    return -1;
    }
};
*/

/*Optimal Solution -> time complexity -> O(n)
-> Applying Moore's Voting Algorihtm
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    
        int n = nums.size(), count =0, value;
       for(int i=0; i<n; i++)
       {
           if(count ==0)
           {
               value = nums[i];
               count++;
           }
           else if(nums[i]==value)
           {
               count++;
           }
           else
           {
               count--;
           }
       }
        int count1=0;
        for(int i=0; i<n; i++)
        {
          if(nums[i]==value)
          {
              count1++;
          }
        }
        if(count1>n/2)
        {
            return value;
        }
        return -1;
    }
};

  


































