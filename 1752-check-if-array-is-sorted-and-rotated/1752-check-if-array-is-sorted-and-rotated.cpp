class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size(), count =0;
        for(int i=1; i<n; i++)
        {
            if(nums[i-1]>nums[i])
            {
                count++;
            }
        }
        if(nums[0]<nums[n-1])
        {
            count++;
        }
        return count<=1;

    }
    //nums = [4,5,1,2] => count will be 1
    //nums = [4,4,4,4] => count will be 0
    //so that returning count<=1
    //Don't use this 
    //if(arr[i]>arr[i+1])--> will be stack overflow because if the iteration will reached at end (let's size = 6) then i = 6 and i+1 = 7---> which doesn't exist will show error.
   
};