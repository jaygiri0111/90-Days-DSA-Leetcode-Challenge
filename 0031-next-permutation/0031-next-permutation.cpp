class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        /* 
        -->Longest prefix match and break point [nums[i]<nums[i+1]]
        -->Find >1, but the smallest one so that you stay close
        -->Try to place num in sorted array
        */
        
        int index=-1, n = nums.size();
        for(int i=n-2; i>=0; i--)
        {
           if(nums[i]<nums[i+1])
           {
             index = i; 
              break;
           }
        }
        
        if (index == -1)
        {
          reverse(nums.begin(),nums.end());
          return;
        }
        
        for(int i = n-1; i>index; i--)
        {
             if(nums[i]>nums[index])
             {
               swap(nums[i],nums[index]);
                 break;
             }
        }
        
       reverse(nums.begin()+index+1,nums.end());
            
        }
};