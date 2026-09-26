// strivers soln
class Solution{
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        // using upper bound and lowerbound
        // first occ=lb , last occ=ub-1
        int lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int ub=upper_bound(nums.begin(),nums.end(),target)-nums.begin();

        if(lb==nums.size() || nums[lb]!=target){ // points outside or not present
            return {-1,-1};
        }else{
            return {lb,ub-1};
        }
    }
};