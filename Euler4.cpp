/*
A palindromic number reads the same both ways.
The largest palindrome made from the product of two
2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
using namespace std;
class Euler
{
public:
    int rev(int k) // assuming it is three digit
    {
        int arr[3];
        arr[0]=k%100;
        arr[1]=(k%100)/10;
        arr[2]=k/100;
        return arr[0]*100+arr[1]*10+arr[2];
    }
    int palindrome()
    {
        int i = 998001;
        while (i > 0)
        {

            int z = i / 1000;
            z = rev(z);
            int t = i % 1000;
            if (z == t)
            {
                return i;
            }
            i--;
        }
    }
};

int main()
{
    Euler e1;
    cout<<e1.palindrome()<<endl;
    return 0;
}