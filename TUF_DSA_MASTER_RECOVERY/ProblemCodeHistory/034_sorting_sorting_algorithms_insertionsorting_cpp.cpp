class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<=n-1;i++){
            for(int j=i;j>0;j--){
                if(nums[j-1]>nums[j]){
                    swap(nums[j-1],nums[j]);
                }
                else{break;}
            }
        }
        return nums;
    }
};
