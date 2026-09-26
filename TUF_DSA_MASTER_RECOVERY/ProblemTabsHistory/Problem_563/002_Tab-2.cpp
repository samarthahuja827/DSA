// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         set<int> s;
//         int maxcount=1;
//         for(int i=0;i<nums.size();i++){
//             int count=1;
//             for(int j=0;j<nums.size();j++){
//                 while(nums[j]==nums[i]+1){
//                     count++;
//                 }
//             }
//             maxcount=max(maxcount,count);
//         }
//         return maxcount;
//     }
// }; still wrong as for {1,2,3,4} it will give 2 as it does not continue and checks for only 2 so ans give 2 instead of 4