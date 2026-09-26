class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
        // optimized- prefix sum
        unordered_map<int,int> mp;
        mp[0]=1;
        int prefixSum=0;
        int total=0;
        for(int i=0;i<nums.size();i++){
            prefixSum=prefixSum+nums[i];
            if(mp.count(prefixSum-k)){ // .count tells if it exist or not (0 or 1)
                total=total+mp[prefixSum-k];
                mp[prefixSum]++;
            }else{
                mp[prefixSum]++;
            }
        }
        return total;
    }
};