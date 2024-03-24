class Solution {
public:
    int first_position(vector<int>nums, int target)
    {
        int n= nums.size();
        int low = 0;
        int high = n-1;
        int ans =-1 ;
        if(low == high)
        {
          if(nums[low]==target)
            {
            return 0;
            }
        }
        int mid = low+(high-low)/2;
        while(low<=high)
        {
            if(nums[mid]==target)
            {
              ans = mid;
              high = mid-1;

            }
            else if(nums[mid]<target)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
            mid = low+(high-low)/2;
        }
        return ans;
    }
     int last_position(vector<int>nums, int target)
    {
        int n= nums.size();
        int low = 0;
        int high = n-1;
        int ans1=-1 ;
        if(low ==high)
        {
          if(nums[low]==target)
            {
            return  0;
            }
        }
        int mid = low+(high-low)/2;
        while(low<=high)
        {
           
            if(nums[mid]==target)
            {
              ans1 = mid;
              low = mid+1;

            }
            else if(nums[mid]<target)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
            mid = low+(high-low)/2;
        }
        return ans1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int  i =  first_position(nums,target);
        int  j =  last_position(nums,target);
        ans = {i,j};
        
        return ans;
    }
};