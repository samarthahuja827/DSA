class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
    //   brute
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int flag=0;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]<nums[j]){
                    flag=1;
                    break;
                }
            }
            if(flag==0) v.push_back(nums[i]);
        }
        return v;
    }
};