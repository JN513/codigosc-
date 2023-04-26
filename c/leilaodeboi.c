#include <stdio.h>

int main(void)
{
    int a, p;

    int p1 = -1, p2 = -1, p3 = -1, r1 = 0, r2 = 0, r3 = 0;

    scanf("%d", &p);
    scanf("%d", &a);

    while (p > 0)
    {
        if (p > p1)
        {
            p1 = p;
            r1 = 1;
        }
        else if (p == p1)
        {
            r1++;
        }
        else if (p > p2)
        {
            p2 = p;
            r2 = 1;
        }
        else if (p == p2)
        {
            r2++;
        }
        else if (p > p3)
        {
            p3 = p;
            r3 = 1;
        }
        else if (p == p3)
        {
            r3++;
        }

        scanf("%d", &a);
        scanf("%d", &p);
    }
    return 0;
}