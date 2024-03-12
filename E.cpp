#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int Calc (long long int n, long long int k);

int main ()
{
    long long int n, k, d;
    scanf ("%lld %lld %lld", &n, &k, &d);

    n = Calc(n, k);

    if (n == -1)
    {
        printf("%lld", n);
        return 0;
    }

    n = n * pow(10, d - 1);

    printf("%lld", n);
    return 0;
}

long long int Calc (long long int n, long long int k)
{
    for (long long int i = 0; i < 10; i++)
    {
        if ((n*10 + i)%k == 0)
        {
            return (n*10 + i);
        }
    }
    
    return -1;
}
