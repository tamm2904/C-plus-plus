#include <stdio.h>
int main()
{
    int x, i, giaithua=1;
    do {
    scanf("%d", &x);
    } while (x<0);
    for (i = 1; i <= x; i++)
    {
        giaithua=giaithua*i;
    }
    printf("%d! = %d", x, giaithua);
    return 0;
}
