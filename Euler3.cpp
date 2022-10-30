/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
using namespace std;
class Euler
{
public:
    long long a, j = 0, i = 1, t = 3, z = 0;
    long long Factors_Prime(long long k)
    {
        i = k;
        k -= 1;
        if (k % 2 == 0)
        {
            k -= 1;
        }
        while (k > 0)
        {
            if (i % k == 0)
            {
                while (t < k)
                {
                    if (k % t == 0)
                    {
                        z = 1;
                    }
                    t += 2;
                }
                t = 3;
                if (z == 0)
                {
                    a = k;
                    return a;
                }
                else
                {
                    z = 0;
                }
            }
            k -= 2;
        }
        cout << a << endl;
    }
};
int main()
{
    Euler e1;
    cout << e1.Factors_Prime(1000) << endl;
    return 0;
}