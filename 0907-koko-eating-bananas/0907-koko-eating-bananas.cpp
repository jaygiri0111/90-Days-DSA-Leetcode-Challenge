class Solution {
public:
    bool canKokoFinishBananasWithKSpeed(vector<int>& piles, int h, int k) {
        long long int totalHoursTakenByKokoToFinishAllBananas = 0;
        for (int i = 0; i < piles.size(); i++) {
            totalHoursTakenByKokoToFinishAllBananas +=
                ceil(piles[i] / (double)k);
        }
        return totalHoursTakenByKokoToFinishAllBananas <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        //  auto it = max_element(piles.begin(), piles.end());
        int end = *max_element(piles.begin(), piles.end());
        int ans = 0;
        while (start <= end) {
            int mid = (start + end) / 2;
            int k = mid;
            if (canKokoFinishBananasWithKSpeed(piles, h, k)) {
                // if true
                ans = k;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};