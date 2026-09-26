// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         vector<int> v;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]>0) v.push_back(nums[i]);
//         }
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]<0) v.push_back(nums[i]);
//         }
//         for(int i=0;i<nums.size()/2;i++){
//             nums[2*i]=v[i];
//             nums[2*i+1]=v[nums.size()/2 +i];
//         }
//         return nums;
//     }
// };