class Solution {
public:
    int largestElement(vector<int>& nums) {
        int biggest=nums[0];
        int n=nums.size();
        for(int i=1;i<=n-1;i++){
            if(nums[i]>biggest){
                biggest=nums[i];
            }
        }
        return biggest;
    }
};