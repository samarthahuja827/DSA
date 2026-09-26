class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        // optimal
        map<int,int> PrefixSumMap;
        int sum=0;
        int maxlength=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(sum==k) maxlength=max(maxlength,i+1);
            int rem=sum-k;
            if(PrefixSumMap.find(rem) != PrefixSumMap.end()){
                int len=i-PrefixSumMap[rem];
                maxlength=max(maxlength,len);
            }
        if(PrefixSumMap.find(sum)==PrefixSumMap.end()){
            PrefixSumMap[sum]=i;
        }
        }
        return maxlength;
    } 
};
