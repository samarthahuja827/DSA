// recursive
// mid = low + (high-low)/2 is prefered to avoid overflow or use long long
// if search space till only INT_MAX u can use this formula otherwise use long long if beyond;
class Solution{
public:
int f(int low,int high,int target,vector<int>& nums){
            if(low>high) return -1;
            int mid=(low+high)/2;
            if(target==nums[mid]) return mid;
            if(target<nums[mid]){
                return f(low,mid-1,target,nums);
            }
            if(target>nums[mid]){
                return f(mid+1,high,target,nums);
            }
}
    int search(vector<int> &nums, int target){
        int n=nums.size();
        int low=0;
        int high=nums.size()-1;
        return f(low,high,target,nums);
        }
};