// brute
class Solution {
public:
    int maxLen(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {

                int sum = 0;

                for (int k = i; k <= j; k++) {
                    sum += arr[k];
                }

                if (sum == 0) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};