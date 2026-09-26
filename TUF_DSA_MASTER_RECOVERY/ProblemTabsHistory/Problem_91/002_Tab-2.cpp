// MY APPROACH
class Solution {
public:
  int NthRoot(int N, int M) {
       int low=0;
       int high=M;
       int mid;
       while(low<=high){
        mid=(low+high)/2;
        if(pow(mid,N)==M) return mid; // ypu can calculate long long val = pow(mid, N); once at start and use val elsewhere so no need to use twice
        else if(pow(mid,N)>M){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
       }
       return -1;
    }
};
