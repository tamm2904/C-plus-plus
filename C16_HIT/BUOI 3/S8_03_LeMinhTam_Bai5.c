#include <stdio.h>
int main()
{
    int n,i,a=0,b=1,c=0;
    do {
        scanf("%d", &n);
    } while (n<0 || n>100);
    //--------------------------------------
    for (i=1; i<=n; i++)
    {
        a=a+i;
    }
    printf("A = %d", a);
    //--------------------------------------
    for (i=2; i<=n*2; i++)
    {
        if (i % 2 == 0) {
        b=b+i;
        }
    }
    printf("\nB = %d", b);
    //--------------------------------------
    for (i=1; i<=n*2+1; i++)
    {
        if (i % 2 != 0) {
        c=c+i;
        }
    }
    printf("\nC = %d", c);
    return 0;
}