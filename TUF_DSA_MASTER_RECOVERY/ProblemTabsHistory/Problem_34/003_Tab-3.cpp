class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v(nums.size());
        int a=0,b=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                v[a]=nums[i];
                a=a+2;
            }else{
                v[b]=nums[i];
                b=b+2;
            }
        }
        return v;
    }
};