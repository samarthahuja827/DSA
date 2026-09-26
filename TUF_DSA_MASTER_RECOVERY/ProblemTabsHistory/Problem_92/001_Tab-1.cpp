class Solution {
public:
    int floorSqrt(int n)  {
        int sq;
      for(int i=1;i<=n;i++){ // or(i=1;i*i<=n;i++)
        sq=i*i;
        if(sq==n) return i;
        if(sq>n) return i-1;
      }
      return -1;
    }
};