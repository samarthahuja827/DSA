class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
        // brute
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                int sum=0;
                for(int z=i;z<=j;z++){
                    sum=sum+nums[z];
                }
                if(sum==k) count++;
            }
        }
        return count;
    }
};