//  Kadane + printing subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int mx=nums[0];
        int start=0, ansend=0, ansstart=0;
        for(int i=0;i<nums.size();i++){
            if(sum==0) start=i;
            sum=sum+nums[i];
            if(sum>mx){
                mx=sum;
                ansstart=start;
                ansend=i;
            }
            if(sum<0){
                sum=0;
            }
        }
        // printing
            for(int i=ansstart;i<=ansend;i++){
                cout<<nums[i]<<" ";
            }
        return mx;
    }
};