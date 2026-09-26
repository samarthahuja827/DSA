class Solution {
public:
    int reverseNumber(int n) {
        int lastDigit;
        int count=0;
        int revNum=0;
        
        while(n!=0){
            lastDigit = n%10;
            n=n/10;
            count++;
            revNum = (revNum * 10) + lastDigit; //main point
        }
        return revNum;
    }
};