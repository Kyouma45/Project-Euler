/*
By listing the first six prime numbers : 2, 3, 5, 7, 11, and 13, 
we can see that the 6th prime is 13.
What is the 10001st prime number?
*/

#include <iostream>
using namespace std;
class Euler
{
    public:
    int Prime(long);
    long Find()
    {
        long i=3;
        int t=1;
        while(1)
        {
            if(Prime(i)==0)
                t++;
            if(t==10001)
            return i;
            i+=2;
        }
    }
};

int Euler::Prime(long k)
{
    for(long p=2;p<k;p++)
    {
        if(k%p==0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    Euler e1;
    cout<<e1.Find()<<endl;;
    return 0;
}