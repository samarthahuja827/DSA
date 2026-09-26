class Solution {
public:
  int smallestDivisor(vector<int> &nums, int limit) {
    int c,ans;
    int mx=*max_element(nums.begin(),nums.end());
       for(int i=1;i<=mx;i++){
        int sum=0;
        for(int j=0;j<nums.size();j++){
            c=ceil((double)nums[j]/i);
            sum+=c;
        }
        if(sum<=limit) return i;
       }
       return -1;
    }
};