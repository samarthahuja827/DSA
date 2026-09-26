// class Solution
// {
// public:
//     int GCD(int n1, int n2)
//     {
//         while (n1 > 0 && n2 > 0)
//         {
//             int gcd;
//             int n = min(n1, n2);
//             for (int i = 1; i <= n; i++)
//             {
//                 if (n1 % i == 0 && n2 % i == 0)
//                 {
//                     gcd = i;
//                 }
//             }
//             return gcd;
//         }
//     }
// };
class Solution
{
public:
    int GCD(int n1, int n2)
    {
        int a = n1, b = n2;
        int gcd;
        while (a > 0 && b > 0)
        {
            if (a > b)
            {
                a = a % b;
            }
            else
            {
                b = b % a;
            }
        }
        if (a == 0)
        {
            gcd = b;
        }
        else
        {
            gcd = a;
        }
        return gcd;
    }
};