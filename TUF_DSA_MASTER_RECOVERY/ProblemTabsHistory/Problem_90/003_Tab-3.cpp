// wrong see below scorrect soln
// class Solution {
// public:
//     int singleNonDuplicate(vector<int> &nums) {
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]^nums[i-1]!=0){
//                 return nums[i];
//                 break; //optional
//             }
//         }
//     }
// };

class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) {
        int xr=0;
        for(int i=0;i<nums.size();i++){
          xr=xr^nums[i]; 
        }
        return xr;
    }
};