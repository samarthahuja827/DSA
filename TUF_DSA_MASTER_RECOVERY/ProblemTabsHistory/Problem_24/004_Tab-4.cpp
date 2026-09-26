// kadane inspired
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxiProd=nums[0];
        int miniProd=nums[0];
        int ans=nums[0];
        for(int i=0;i<nums.size();i++){
            int curr=nums[i];
            if(curr<0){
                swap(miniProd,maxiProd);
            }
            maxiProd=max(curr,maxProduct*curr);
            miniProd=min(curr,miniProd*curr);
            ans=max(ans,maxiProd);
        }
        return ans;
    }
};