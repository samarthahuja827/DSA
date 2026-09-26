class Solution {
public:
    int search(vector<int> &nums, int k) {
       for(int i=0;i<nums.size();i++){
        if(nums[i]==k) return i;
       }
       return -1;
    }
};