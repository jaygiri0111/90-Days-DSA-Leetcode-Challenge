class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(n+1, 0); 
        for(int i=0;i<n; i++)
        {
            hash[nums[i]]++;
        }
        int duplicate =-1;
        for(int i=1; i<=n; i++)
        {
           if(hash[i]>=2) duplicate = i;
        }

        return duplicate;

    }
};