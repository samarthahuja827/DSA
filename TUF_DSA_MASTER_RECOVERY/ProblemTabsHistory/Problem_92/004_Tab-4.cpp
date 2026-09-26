class Solution {
public:
    int floorSqrt(int n)  {
      int low=0;
      int high=n;
      int mid;
      int ans;
      while(low<=high){
        mid=(low+high)/2;
        if(mid*mid==n) return mid;
        else if(mid*mid>n){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
      }
      return high;
    }
};