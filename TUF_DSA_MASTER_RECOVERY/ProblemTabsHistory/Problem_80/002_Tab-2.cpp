// (self soln)will not run always as if there is a same no. at a prev index than mid it will not be considered and mid will immediately be returned hence it is not correct approach
// IDEA:"I want low to eventually reach the first position where nums[low] >= x."
class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int low=0;
        int high=nums.size()-1;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[low]>=x) return low;
            if(nums[mid]==x) return mid;
            if(nums[mid]<x){
                low=mid+1;
            }
            else high=mid-1;
        }
        return nums.size();
    }
};
