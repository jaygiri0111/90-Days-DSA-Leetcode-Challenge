class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int size = nums.size();
        int evencount = 0;
        for (int i = 0; i < size; i++) {
            int n = nums[i];
            int count=0;
            while (n > 0) {
                int rem = n % 10;
                n = n / 10;
                count++;
            }
            if(count%2==0)
            {
              evencount++;
            }
        }
        return evencount;
    }
};