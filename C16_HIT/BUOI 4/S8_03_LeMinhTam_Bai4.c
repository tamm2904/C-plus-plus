#include <stdio.h>
int main() 
{
    int i, n;
    float max, a[100];
    do {
        scanf("%d", &n);
    } while (n<=0 || n>=100);
    for (i=1; i<=n; i++)
    {
        scanf("%f", &a[i]);
    }
    max = a[1];
    for (i=2; i<=n; i++)
    {
        if (max < a[i]) max = a[i];
    }
    for (i=1; i<=n; i++)
    {
        if (a[i] == max) printf("%d ", i);
    }
    return 0;
}