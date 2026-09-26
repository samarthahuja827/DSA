class Solution {
public:
    int searchInsert(vector<int> &nums, int target)  {
        // brute
        int n=nums.size();
       for(int i=0;i<n;i++){
        if(nums[i]==target) return i;
        if(nums[i]>target) return i;
       }
       return n;
    }
};