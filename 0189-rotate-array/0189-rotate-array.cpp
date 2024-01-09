//Approach - 1
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//     int n = nums.size();
//     reverse(nums.begin(), nums.end());
//     reverse(nums.begin(),nums.begin()+k);
//     reverse(nums.begin()+k, nums.end());
//     }
// };

//Approach - 2
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//     int n = nums.size();
//     vector<int>temp(nums.size());
//     for(int i =0; i<n;  i++)
//     {
//         temp[(i+k)%n] = nums[i];
//     }
//     nums = temp;
//     }
// };

//Approach - 3
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k= k%n;
    int temp1 [n], temp2 [n];
    int j = n-k;
     if (k == 0) return;  //If k is zero, no rotation needed

      //Storing the last k elements in temp1
     for (int i = n - k, j = 0; i < n; ++i, ++j) {
           temp1[j] = nums[i];
        }

       // Storing the first n-k elements in temp2
     for (int i = 0; i < n - k; ++i) {
            temp2[i] = nums[i];
        }

        // Reconstructing the rotated array
        for (int i = 0; i < k; ++i) {
            nums[i] = temp1[i];
        }

        for (int i = k; i < n; ++i) {
            nums[i] = temp2[i - k];
        }
        
    }

};

//Best Solution on Internet.