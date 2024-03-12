#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a1, a2;
    int b1, b2;
    int guestship;
    int goal = 0;

    scanf("%d:%d", &a1, &a2);
    scanf("%d:%d", &b1, &b2);
    scanf("%d", &guestship);


    //if (a1 + b1 >= a2 + b2)
    if (a1 + b1 <= a2 + b2)
    {
        if ((b2 > a1) && (guestship == 1))
        {
            goal = b2 + a2 - a1 - b1;
        }
        if ((not(b2 > a1)) && (guestship == 1))
        {
            goal = b2 + a2 - a1 - b1 + 1;
        }
        if ((a1 > b2) && (guestship != 1))
        {
            goal = b2 + a2 - a1 - b1;
        }
        if ((not(a1 > b2)) && (guestship != 1))
        {
            goal = b2 + a2 - a1 - b1 + 1;
        }
    }
    printf("%d", goal);
}