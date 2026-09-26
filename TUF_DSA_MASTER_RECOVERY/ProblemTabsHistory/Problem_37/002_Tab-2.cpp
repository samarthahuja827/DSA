// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         // 2 pointer
//         int start=0;
//         int end=nums.size()-1;
//         vector<int> v;
//         sort(nums.begin(), nums.end());
//         while(start<end){
//             if(nums[start]+nums[end]==target) {
//                 v.push_back(start);
//                 v.push_back(end);
//                 break;
//             }
//             else if(nums[start]+nums[end]>target){
//                 end--;
//             }
//             else{
//                 start++;
//             }
//         }
//         return v;
//     }
// }; NOTE HERE INDEX OF ORIGINAL ARRAY IS LOST