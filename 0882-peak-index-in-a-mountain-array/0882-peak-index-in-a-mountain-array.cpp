// Just for Fun ->O(n) but we require O(logn)
/*class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max = INT_MIN;
        int max_index = -1;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > max) {
                max = arr[i];
                max_index = i;
            }
        }
        return max_index;
    }
};
*/

// Binary search implemented -->O(logn)
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int s = 0;
        int e = n - 1;
        int mid;
        while (s < e) {
            mid = s + (e - s) / 2;
            if (arr[mid] < arr[mid+1]) {
                s = mid + 1;
            } else {
                e = mid;
            }
        }
        return e;
    }
};