/*If we list all the natural numbers below 10 that are multiples
of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000*/

#include <iostream>
using namespace std;
class Math
{
public:
    long sum_multiple_3_5(int k)
    {
        long p = 0;
        k-=1;
        while (k > 0)
        {
            if((k%3==0)||(k%5==0))
            p+=k;
            k--;
        }
        return p;
    }
};

int main()
{
    Math m1;
    int l;
    cout << "Enter a Range: ";
    cin >> l;
    long t = m1.sum_multiple_3_5(l);
    cout << t << endl;
    return 0;
}