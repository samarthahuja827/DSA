class Solution {
public:
    bool isPalindrome(int n) {
        int count=0;
        int revNum=0;
        int lastDigit;
        int originalNum=n;

        while(n!=0){
            lastDigit=n%10;
            n=n/10;
            count++;
            revNum= (revNum*10)+lastDigit;
        }
        if(revNum==originalNum){
                return true;
            }
        else{
                return false;
            }
    }
};