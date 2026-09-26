class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int count=0;
        int n=nums.size();
       for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int xr =0;
            for(int l=i;l<=j;l++){
                xr=xr^nums[l];
            }
            if(xr==k) count++;
        }
       } 
       return count;
    }
};