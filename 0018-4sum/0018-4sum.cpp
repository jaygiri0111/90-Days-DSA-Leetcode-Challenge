// Approach -01 (Brute Force)[Time Limit Exceed-->O(n^4)]
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//       int n = nums.size();//size of array
//       set<vector<int>>st;//For Unique Element

//        //checking all possible quadruplets:
//       for(int i=0; i<n; i++)
//       {
//         for(int j=i+1; j<n; j++)
//         {
//             for(int k = j+1; k<n; k++)
//             {
//                 for(int l = k+1; l<n; l++)
//                 {
//                     //taking bigger datatype to avoid the integer overflow
//                     long long sum = nums[i]+nums[j];
//                     sum+=nums[k];
//                     sum+=nums[l];
//                     if(sum == target)
//                     {
//                         vector<int>temp ={nums[i],nums[j],nums[k],nums[l]};
//                         sort(temp.begin(),temp.end()); //sorting the
//                         quadruplets st.insert(temp);//finding unique element
//                     }
//                 }
//             }
//         }
//       }
//       vector<vector<int>>ans(st.begin(),st.end());
//       return ans;
//     }
// };

// Approach - 02(Using set DataStructure)
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//        int n = nums.size();
//        set<vector<int>>st;
//        for(int i=0; i<n; i++)
//        {
//         for(int j=i+1; j<n; j++)
//         {
//             set<long long >mpp;
//             for(int k= j+1; k<n; k++)
//             {
//                 long long sum = nums[i]+nums[j];
//                 sum+=nums[k];
//                 long long fourth_num= target-sum;
//                 if(mpp.find(fourth_num)!=mpp.end())
//                 {
//                     vector<int>temp={nums[i],nums[j],nums[k],int(fourth_num)};
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
//                 mpp.insert(nums[k]);
//             }
//         }
//        }
//        vector<vector<int>>ans(st.begin(),st.end());
//        return ans;
//     }

// };

// Approach -03 (Optimal Approach)
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < n; i++) {

            //Avoiding Duplicates while moving i
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < n; j++) {
               
                //Avoiding Duplicates while moving j
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;
                int k = j + 1;
                int l = n - 1;
                while (k < l) {
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if (sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;

                        //Avoiding Duplicates while moving k
                        while (k < l && nums[k] == nums[k - 1])
                            k++;

                        //Avoiding Duplicates while moving l
                        while (k < l && nums[l] == nums[i + 1])
                            l--;
                    } else if (sum < target) {
                        k++;
                    } else {
                        l--;
                    }
                }
            }
        }
        return ans;
    }
};