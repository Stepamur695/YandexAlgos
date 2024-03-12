#include <stdio.h>

int Max(int x, int y);
int Min(int x, int y);


int main ()
{
    int p, v;
    int q, m;

    scanf("%d %d", &p, &v);
    scanf("%d %d", &q, &m);

    int q1 = q - m;
    int q2 = q + m;

    int p1 = p - v;
    int p2 = p + v;

    if (p == q)
    {
        printf("%d", 1 + 2*Max(v,m));
    }
    if (p > q)
    {
        if (p1 <= q2)
        {
            printf("%d", Max(p2, q2) - Min(p1, q1) + 1);
        }
        else
        {
            printf("%d", p2 - p1 + 1 + q2 - q1 + 1);
        }        
    }
    if (q > p)
    {
        if (q1 <= p2)
        {
            printf("%d", Max(p2, q2) + 1 - Min(p1, q1));
        }
        else
        {
            printf("%d", p2 - p1 + 2 + q2 - q1);
        }
    }    
}

int Max(int x, int y)
{
    if (x >= y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int Min(int x, int y)
{
    if (x <= y)
    {
        return x;
    }
    else
    {
        return y;
    }
}