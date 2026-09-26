// class Solution {
// public:
//     vector<int> findMissingRepeatingNumbers(vector<int> nums) {
//         int a,b;
//         for(int i=0;i<nums.size();i++){
//             int count=0;
//             for(int j=0;j<nums.size();j++){
//                 if(i+1==nums[j]){
//                     count++;
//                 }
//                 if(nums[j]==nums[i] && j!=i){
//                     a=nums[i];
//                 }
//             }
//             if(count==0){
//                 b=i+1;
//             }
//         }
//         vector<int> ans;
//         ans.push_back(a);
//         ans.push_back(b);
//         return ans;
//     }
// };