class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low=0, high = n-1, ans = INT_MAX;
        while(low<=high)
        {
            int mid = (low+high)/2;

            //If the search space is already sorted the minimun ele
            //is always be nums[low]
            //first if is for only optimisation and it is not mandatory
            if(nums[low]<=nums[high])
               {
                    ans=min(ans,nums[low]);
                    break;
               }
            //left sorted
            if(nums[low]<=nums[mid])
            {
                ans = min(nums[low],ans);//minimum from left sorted 
                low = mid+1;
            }
            //right sorted
            else
            {
                high = mid-1;
                ans = min(ans,nums[mid]);//minimum from right sorted
            }
        }
        return ans;
    }
};