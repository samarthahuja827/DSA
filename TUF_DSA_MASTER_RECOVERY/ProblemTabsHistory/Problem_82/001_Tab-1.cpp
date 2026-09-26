class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int ans=nums.size();
        int low=0;
        int high=ans-1;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>x){ // only this change 
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};