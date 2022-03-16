#include <stdio.h>
int main() 
{
    int i, j, n, m, dem=0;
    int a[100], b[100];
    do {
        scanf("%d", &n);
    } while (n<=0 || n>=100);
    for (i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    //-------------------------------------
    for (i=1; i<=n; i++)
    {
        m=0;
        for (j=1; j<=a[i]; j++)
        {
            if (a[i] % j == 0) m += j;
        }
        if (2*a[i] == m) 
        {
            dem++;
            b[dem] = a[i];
        }
    }
    //--------------------------------------
    printf("%d\n", dem);
    for (i=1; i<=dem; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}