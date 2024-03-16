// Approach -01 (Brute force) --->O(n^3)(Time Limit Exceed)
/*class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp;
        set<vector<int>>st;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                for(int k=j+1; k<n; k++)
                {
                  if(nums[i]+nums[j]+nums[k]==0)
                  {
                   temp = {nums[i],nums[j],nums[k]};
                     sort(temp.begin(),temp.end());
                     st.insert(temp);
                  }
                }
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};
*/
// Approach - 02 (Better solution)(show --> TLE on leetcode)
// Using Map Data structure
/*class Solution {
  public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>>ans;//for finding unique from final list
        for(int i=0; i<n;  i++)
        {
           set<int>mpp; // for storing and finding element
            for(int j=i+1; j<n; j++)
            {
             int k = -(nums[i]+nums[j]);
             if((mpp.find(k)!=mpp.end()))//find the element in the set
             {  vector<int>temp={nums[i],nums[j],k};//for storing result
                sort(temp.begin(),temp.end());//sorting the vector element
                ans.insert(temp);
             }
             mpp.insert(nums[j]);
            }
        }
        vector<vector<int>>result(ans.begin(),ans.end());
        return result;
    }
};
*/
// Approach - 03 (Optimal solution)
// Using two pointer Approach
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++;
                } else if (sum > 0) {
                    k--;
                } else {
                    vector<int> temp;
                    temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1])
                        j++;
                    while (j < k && nums[k] == nums[k + 1])
                        k--;
                }
            }
        }
        return ans;
    }
};