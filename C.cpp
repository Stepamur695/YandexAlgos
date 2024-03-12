#include <stdio.h>
#include <stdlib.h>

int Calc (int x);


int main ()
{
    long long int n;
    long long int str;
    long long int goal = 0;
    long long int i = 0;

    scanf("%lld", &n);

    
    while (n > i)
    {
        scanf("%lld", &str);
        goal += str/4 + Calc(str%4);
        i++;
    }

    printf ("%lld", goal);
    
}

int Calc (int x)
{
    if (x == 0)
    {
        return 0;
    }
    if (x == 1)
    {
        return 1;
    }
    if ((x == 2) || (x == 3))
    {
        return 2;
    }
    if ((x >= 4) || (x <= -1))
    {
        return -1;
    }    
}