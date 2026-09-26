// intutive
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int preProduct=1; //prefix product or left product
        int suffProd=1; //suffix product or right product
        int ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(preProduct==0){
                preProduct=1;
            }
            if(suffProd==0){
                suffProd=1;
            }
            preProduct*=nums[i];
            suffProd*=nums[n-1-i];
            ans=max(ans,max(preProduct,suffProd));
        }
        return ans;
    }
};