class Solution {
public:
    int pascalTriangleI(int r, int c) {
        int n=r-1; //nCk
        int k=c-1;
        long long ans=1;
        for(int i=0;i<n;i++){
            ans=ans*(n-i)/(i+1); 
        }
        // another approach for this loop(reverse)
        // int denominator = 1;
        // for (int numerator = n; numerator > n - k; numerator--) {
        //     ans = ans * numerator / denominator;
        //     denominator++;
        // }
        return ans;
    }
};