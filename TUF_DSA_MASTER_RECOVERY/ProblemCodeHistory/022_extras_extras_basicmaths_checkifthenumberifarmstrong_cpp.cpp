class Solution
{
public:
    bool isArmstrong(int n)
    {
        int originalNum = n;
        int sum = 0;
        int count = 0;
        int lastDigit;
        while (n != 0)
        {
            lastDigit = n % 10;
            n = n / 10;
            count++;
        }
        n = originalNum;
        while (n != 0)
        {
            lastDigit = n % 10;
            n = n / 10;
            sum = sum + (int)pow(lastDigit, count);
        }
        if (sum == originalNum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};