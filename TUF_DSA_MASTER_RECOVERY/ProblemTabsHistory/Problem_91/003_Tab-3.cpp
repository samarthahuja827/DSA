// binary exponentiation
long long fn(long long mid, int N) {
    long long ans = 1;

    while (N > 0) {
        if (N % 2 == 1) {
            ans = ans * mid;
            N = N - 1;
        }
        else {
            mid = mid * mid;
            N = N / 2;
        }
    }

    return ans; //mid^n
}

class Solution {
public:
    int NthRoot(int N, int M) {
        int low = 0, high = M;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long midN = fn(mid, N);

            if (midN == M)
                return mid;
            else if (midN < M)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return -1;
    }
};
