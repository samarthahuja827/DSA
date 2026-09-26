class Solution {
public:
    int countDigit(int n) {
        int lastDigit;
        int count=0;
        while(n!=0){
          lastDigit = n%10;
          n= n/10;
          count++;  
        }
        return count;
    }
};