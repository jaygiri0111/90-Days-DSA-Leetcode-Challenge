class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int len = arr.size();
        vector<int> ans(len);
        int maxi = -1;
        for (int i = len - 1; i >= 0; i--) {
            ans[i] = maxi;
            maxi = max(maxi, arr[i]);
        }
        return ans;
    }
};
