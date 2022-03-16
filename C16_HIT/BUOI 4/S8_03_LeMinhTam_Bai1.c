#include <stdio.h>
int main() 
{
    int i, n, dem=0;
    int a[100];
    do {
        scanf("%d", &n);
    } while (n<=0 || n>=100);
    for (i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    if (a[1]<a[n]) {
        for (i=1; i<=n; i++)
        {
            if (a[i]<a[i+1]) dem++;
        }
        if (dem == n-1) printf("YES");
        else printf("-1");
    }
    else if (a[1]>a[n])
    {
        for (i=1; i<=n; i++)
        {
            if (a[i]>a[i+1]) dem++;
        }
        if (dem == n-1) printf("NO");
        else printf("-1");
    }
    return 0;
}