class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        // better
        int length=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum=sum+nums[j];
                if(sum==k) length=max(length,j-i+1);
            }
        }
        return length;
    }
};
