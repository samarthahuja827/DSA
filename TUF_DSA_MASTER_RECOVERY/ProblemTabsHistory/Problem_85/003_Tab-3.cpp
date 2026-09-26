// my soln
class Solution{
public:
    int firstOcc(vector<int>&nums,int target){
        // first occ k liye move left, last k liye move right
        int ans=-1;
        int low=0,high=nums.size()-1;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
    int lastOcc(vector<int>&nums,int target){
        int ans=-1;
        int low=0,high=nums.size()-1;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target){
                ans=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int> &nums, int target) {
        int f=firstOcc(nums,target);
        int l=lastOcc(nums,target);
        return {f,l};
    }
};