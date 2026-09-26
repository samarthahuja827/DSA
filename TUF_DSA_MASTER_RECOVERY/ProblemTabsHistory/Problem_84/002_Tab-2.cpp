class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int low=0;
        int mid;
        int high=nums.size()-1;
        int mn=INT_MAX;
        int ans=0;
        while(low<=high){
            mid=(low+high)/2;
            // left
            if(nums[low]<=nums[mid]){
                if(mn>nums[low]){ // mn and ans must be updated together only when a new minimum is found. Hence we wrote in if{}
                mn=nums[low];
                ans=low;
                }
                low=mid+1;
            }
            // right
            else{
                if(mn>nums[mid]){
                    mn=nums[mid];
                    ans=mid;
                }
                high=mid-1;
            }
        }
        return ans;
    }
};