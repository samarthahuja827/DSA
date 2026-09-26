class Solution {
public:
    int largestSubarraySumMinimized(vector<int> &a, int k) {
        int mx=*max_element(a.begin(),a.end());
        int totalSum=0;
        for(int x:a){
            totalSum+=x;
        }
        for(int maxSum=mx;maxSum<=totalSum;maxSum++){
            int subarray=1;
            int sum=0;
            for(int x:a){
                if(sum+x<=maxSum){
                    sum+=x;
                }
                else{
                    sum=x;
                    subarray++;
                }
            }
            if(subarray<=k) return maxSum;
        }
        return -1;
    }
};