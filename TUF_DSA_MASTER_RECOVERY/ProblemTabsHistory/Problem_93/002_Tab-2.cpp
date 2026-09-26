class Solution {
public:
  int smallestDivisor(vector<int> &nums, int limit) {
       int low=1;
       int high=*max_element(nums.begin(),nums.end());
       int mid,c;
       while(low<=high){
        mid=(low+high)/2;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            c=ceil((double)nums[i]/mid);
            sum+=c;
        }
        if(sum<=limit){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
       }
       return low;
    }
};