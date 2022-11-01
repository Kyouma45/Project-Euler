/*
2520 is the smallest number that can be divided by each of the
numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible
by all of the numbers from 1 to 20?
*/

#include <iostream>
using namespace std;
class Euler
{
public:
    long long Number()
    {
        long long i = 46189;
        int p = 0, z = 1;
        while (p != 1)
        {
            z++;
            i = i * z;
            if (i % 16 == 0 && i % 18 == 0 && i % 20 == 0&&i%14==0)
            {
                p = 1;
            }
        }
        return i;
    }
};

int main()
{
    Euler e1;
    cout << e1.Number();
    return 0;
}