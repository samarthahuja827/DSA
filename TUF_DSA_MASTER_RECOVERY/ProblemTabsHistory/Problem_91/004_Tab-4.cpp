long long fn(long long mid, int N,int M) {
    long long ans = 1;
    for(int i=1;i<=N;i++){
        ans=ans*mid;
        if(ans>M) return 2;
    }
    if(ans==M) return 1;
    return 0;
}

class Solution {
public:
    int NthRoot(int N, int M) {
        int low = 0, high = M;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long midN = fn(mid, N,M);

            if (midN == 1)
                return mid;
            else if (midN ==0)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return -1;
    }
};