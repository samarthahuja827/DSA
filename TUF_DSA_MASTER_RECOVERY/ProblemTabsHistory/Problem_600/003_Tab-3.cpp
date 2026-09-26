class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missing=0;
       for(int i=0;i<arr.size();i++){
        if(i==0) missing=arr[i]-1;
        else{
            missing+=arr[i]-arr[i-1]-1;
        }
        if(missing>=k) return arr[i]-missing-1+k;
       }
    return arr.back() + (k-missing);
    }
};
