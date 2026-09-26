class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int count0=0;
        int count1=0;
        int count2=0;

       for(int i=0;i<nums.size();i++){
        if(nums[i]==0) count0++;
        if(nums[i]==1) count1++;
        if(nums[i]==2) count2++;
       }
       for(int j=0;j<count0;j++){
        nums[j]=0;
       }
       for(int j=count0;j<count0+count1;j++){
        nums[j]=1;
       }
       for(int j=count0+count1;j<nums.size();j++){
        nums[j]=2;
       }
    }
};