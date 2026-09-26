class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        for(int j=0;j<k;j++){
            int temp = nums[0];
            for(int i=1;i<=nums.size()-1;i++){
                nums[i-1]=nums[i];
            }
            nums[nums.size()-1]=temp;
        }
    }
};