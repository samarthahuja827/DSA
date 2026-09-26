class Solution {
public:
    int searchInsert(vector<int> &nums, int target)  {
    //    lower bound 
        int ans=nums.size()-1;
        int low=0,high=ans-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};