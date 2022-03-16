#include <stdio.h>
#include <math.h>
int main() 
{
    int i, n, m, dem=0;
    int a[100], b[100];
    do {
        scanf("%d", &n);
    } while (n<=0 || n>=100);
    for (i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    //------------------------------------
    for (i=1; i<=n; i++)
    {
        m = sqrt(a[i]);
        if (a[i]==m*m) 
        {
            dem++;
            b[dem] = a[i];
        }
    }
    //------------------------------------
    printf("%d\n", dem);
    for (i=1; i<=dem; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}