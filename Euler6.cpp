#include <iostream>
using namespace std;
class Euler
{
    public:
    long long sum_of_square()
    {
        long long z=0;
        int i=1;
        while(i<101)
        {
            z+=i*i;
            i++;
        }
        return z;
    }
    long long square_of_sum()
    {
        long long z=0;
        int i=1;
        while(i<101)
        {
            z+=i;
            i++;
        }
        z=z*z;
        return z;
    }
};

int main()
{
    Euler e1;
    long long p=e1.square_of_sum();
    p-=e1.sum_of_square();
    cout <<p<<endl;
    return 0;
}