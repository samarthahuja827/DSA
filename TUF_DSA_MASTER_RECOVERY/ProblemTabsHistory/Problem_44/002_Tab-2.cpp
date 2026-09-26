class Solution {
public:
    int missingNumber(vector<int>& nums) {
        bool ans=false;
        int value;
        for(int i=0;i<=nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i) ans=true;
                break;
            }
            if(ans==false) value=i;
            ans=false;

        }
        return value;
    }
};