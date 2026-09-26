class Solution {
public:

        int floor(vector<int>& nums, int x){
            int ans=-1;
            int low=0,high=nums.size()-1;
            int mid;
            while(low<=high){
                mid=(low+high)/2;
                if(nums[mid]<=x){ // maybe ans then move right
                    ans=nums[mid];
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            return ans;
        }
        int ceil(vector<int>&nums,int x){
            int ans=-1;
            int low=0,high=nums.size()-1;
            int mid;
            while(low<=high){
                mid=(low+high)/2;
                if(nums[mid]>=x){ // maybe ans then move left
                    ans=nums[mid];
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
            return ans;
        }
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int f=floor(nums,x);
        int c=ceil(nums,x);
        return {f,c};
    }
};