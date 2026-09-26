class Solution {
 public:
  void moveZeroes(vector<int>& nums) {
    int count = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
      if (nums[i] == 0) {
        count++;

        for (int j = i + 1; j < nums.size(); j++) {
          if (nums[j] != 0) {
            nums[i] = nums[j];
            nums[j] = 0;
            break;
          }
        }
      }
    }
    //    for(int k=nums.size()-1;k>=nums.size()-count;k--){
    //     nums[k]=0;
    //    }
  }
};