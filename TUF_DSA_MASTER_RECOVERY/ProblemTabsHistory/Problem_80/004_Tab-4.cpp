// mentioned code
class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int ans=nums.size();
        int low=0;
        int high=ans-1;
        int mid;
        while(low<=high){
           mid=(low+high)/2;
           if(nums[mid]>=x){
            ans=mid; // may be ans
            high=mid-1; // move left and look for more smaller index
           }
           else{
            low=mid+1; //cannot be ans so move it to right of mid
           }
        }
        return ans;
    }
};
// using stl
class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        auto it = nums.lower_bound(nums.begin(),nums.end(),x);
        return it-nums.begin();
        // or entire code in one line return lower_bound(nums.begin(), nums.end(), x) - nums.begin();
    }
};