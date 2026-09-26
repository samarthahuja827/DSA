class Solution {
public:
    int largestSubarraySumMinimized(vector<int> &a, int k) {
        int low=*max_element(a.begin(),a.end());
        int high=0;
        for(int x:a){
            high+=x;
        }
        while(low<=high){
            int mid=(low+high)/2;
            int sum=0;
            int subarray=1;
            for(int x:a){ // ek maxSum ki saari iterations krwane ka kaam
                if(sum+x<=mid){
                    sum+=x;
                }
                else{
                    sum=x;
                    subarray++;
                }
            }
            if(subarray<=k){ //valid
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};