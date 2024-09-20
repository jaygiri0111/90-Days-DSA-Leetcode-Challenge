class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result(m + n);
        int index = 0;
        int i = 0, j = 0;
        while (i < m && j < n) {

            if (nums1[i] < nums2[j]) {
                result[index++] = nums1[i++];
            } else {
                result[index++] = nums2[j++];
            }
        }
        while (i < m) {
            result[index++] = nums1[i++];
        }
        while (j < n) {
            result[index++] = nums2[j++];
        }

        for (int i = 0; i < m + n; i++) {
            nums1[i] = result[i];
        }
    }
};