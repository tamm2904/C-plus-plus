#include <stdio.h>
int main() 
{
    int i, j, n, dem, t=0;
    int a[100];
    do {
        scanf("%d", &n);
    } while (n<=0 || n>=100);
    for (i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=1; i<=n; i++)
    {   
        dem = 0;
        if (a[i] < 2) continue;
        else 
        for (j=2; j <= a[i]/2; j++)
        {
            if (a[i] % j == 0) dem++;
        }
        if (dem == 0) 
        {
            printf("%d ", a[i]);
            t += a[i];
        }
    }
    printf("\n%d", t);
    return 0;
}