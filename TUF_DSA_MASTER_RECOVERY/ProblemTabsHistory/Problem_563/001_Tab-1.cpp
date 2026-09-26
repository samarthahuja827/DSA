// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         set<int> s;
//         for(int i=0;i<nums.size();i++){
//             for(int j=0;j<nums.size();j++){
//                 if(nums[j]==nums[i]+1){
//                     s.insert(nums[i]); //instead you could use count variable to avoid using set which increases space complexity
//                     s.insert(nums[j]);
//                 }
//             }
//         }
//         return s.size();
//     }
// }; this approach is not applicable for all cases it will fail if it has more than one consecutive pairs like {1,2,3,4,10,11}