class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        // brute
        if(nums.empty()) return {-1, -1};
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x) return {x,x};
            if(nums[i]>x) {
                if(i>0) return {nums[i-1],nums[i]};
                else return {-1,nums[i]};
            }
        }
        return {nums.back(),-1};
    }
};