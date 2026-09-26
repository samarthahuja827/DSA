class Solution {
public:
  int NthRoot(int N, int M) {
       for(int i=1;i<=M;i++){ // or i**N<=M
        if(pow(i,N)==M) return i;
       }
       return -1;
    }
};
