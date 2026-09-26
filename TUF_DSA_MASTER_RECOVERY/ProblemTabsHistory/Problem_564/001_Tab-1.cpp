class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        // brute
        int length=0;
        int n=nums.size();

        // Fix the starting index
        for(int i=0;i<n;i++){

            // Extend the subarray one element at a time
            for(int j=i;j<n;j++){
                int sum=0;

                // Update answer if target sum is found
                for(int z=i;z<=j;z++){
                    sum=sum+nums[z];
                }
                if(sum==k) length=max(length,j-i+1);
            }
        }
        return length;
    }
};
