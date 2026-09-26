class Solution {
public:
    long double minimiseMaxDistance(vector<int> &arr, int k) {
        long double low = 0, high = 0;
        int n = arr.size(); 
        // Find the largest gap initially — binary search range starts as [0, largest gap]
        for (int i = 0; i < n - 1; i++) {
            high = max(high, (long double)(arr[i+1] - arr[i]));
        }
        long double diff = 1e-6;   // precision threshold
        while (high - low > diff) { //shrink hota rhega jb tk diff bda h
            long double mid = (low + high) / 2;
            long long stations = 0;   // use long long to be safe against overflow if n or gaps are large
            for (int i = 0; i < n - 1; i++) {
                long double gap = arr[i+1] - arr[i];
                stations += (long long)ceil(gap / mid) - 1;
            }
            if (stations <= k) high = mid;   // mid is achievable -> try smaller max distance
            else low = mid;                   // mid needs too many stations -> relax it
        }
        return high;
    }
};