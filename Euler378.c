// Trinagular Triplets
#include <stdio.h>

long T(int n)
{
    long p = ((n + 1) * n * 1.0) / 2;
    return p;
}

long dT(int n)
{
    long t = T(n);
    long k = t;
    long i = 0;
    while (t > 0)
    {
        if (k % t == 0)
        {
            i++;
        }
        t--;
    }
    return i;
}

long Tr(int n)
{
    long i = 1;
    long j, k, p=0;
    for (i = 1, j = 2, k = 3; i <= n - 2; i++)
    {
        for (j = i + 1; j <= n - 1; j++)
        {
            for (k = j + 1; k <= n; k++)
            {
                if ((dT(i) > dT(j)) && (dT(j) > dT(k)))
                {
                    p++;
                }
            }
        }
    }
    return p;
}

int main()
{
    long p;
    printf("Enter Number: ");
    scanf("%d",&p);
    printf("T(%ld): %ld\n", p, T(p));
    printf("dT(%ld): %ld\n",p, dT(p));
    printf("Tr(%ld): %ld\n",p, Tr(p));
    return 0;
}
