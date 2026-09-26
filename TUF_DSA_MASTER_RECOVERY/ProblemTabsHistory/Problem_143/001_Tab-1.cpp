class Solution{    
public:    
    int singleNumber(vector<int>& nums){
       for(int i=0;i<nums.size();i++){
        int flag =0;
        for(int j=0;j<nums.size();j++){
            if( j!=i && nums[i]==nums[j]){
                flag=1;
            }
        }
        if(flag==0){
            return nums[i];
        }
        else continue;
       }
    }
};