// bymistake wrote for non contiguous
// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int product=1,count=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]>0) product=product*nums[i];
//             else if(nums[i]<0) count++;
//         }
//         if(count<=1) return product;

//         if(count%2==0){
//             for(int i=0;i<nums.size();i++){
//                 if(nums[i]<0){
//                 product=product*nums[i];
//                 }
//             }
//         }
//         if(count%2==1){
//             sort(nums.begin(),nums.end());
//             for(int i=0;i<count-1;i++){
//                 product=product*nums[i];
//             }
//         }
//         return product;
//     }
// }; 

