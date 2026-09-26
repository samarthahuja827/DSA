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
            // optimization
            if(nums[low]<=nums[high]){
                if(mn>nums[low]){
                    mn=nums[low];
                    ans=low;
                }
                break;
            }
            // left
            if(nums[low]<=nums[mid]){
                if(mn>nums[low]){
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