class Solution {
public:
    bool canmakembouquetwithDdays(vector<int>& bloomDay, int m, int k, int d) {
        int counter = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= d) {
                counter++;
            }
            if (counter == k) {
                m--;
                counter = 0;
                if (m == 0)
                    break;
            }
            if (bloomDay[i] > d) {
                counter = 0;
            }
        }
        return m == 0;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long int product = (long long int)m * (long long int)k;
        if (bloomDay.size() < product) {

            return -1;
        }
        int start = *min_element(bloomDay.begin(), bloomDay.end());
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = 0;
        while (start <= end) {
            int mid = (start + end) >> 1;
            int days = mid;
            if (canmakembouquetwithDdays(bloomDay, m, k, days)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};