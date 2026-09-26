class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int xr=0;
            for(int j=i;j<n;j++){
                xr=xr^nums[j];
                if(xr==k) count++;
            }
        }
        return count;
    }
};