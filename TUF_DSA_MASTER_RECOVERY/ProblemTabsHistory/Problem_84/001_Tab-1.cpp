class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int mn=INT_MAX,idx=0;
        
       for(int i=0;i<nums.size();i++) {
        if(nums[i]<mn){
            mn=nums[i];
            idx=i;
        }
       }
       return idx;
    }
};