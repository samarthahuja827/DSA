// both brute approaches
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod;
        int ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                prod=1;
                for(int k=i;k<=j;k++){
                    prod*=nums[k];
                    ans=max(ans,prod);
                }
            }
        }
        return ans;
    }
};

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod;
        int ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            prod=1;
            for(int j=i;j<n;j++){
                prod*=nums[j];
                ans=max(ans,prod);
            }
        }
        return ans;
    }
};