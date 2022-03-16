#include <stdio.h>
int main() 
{
    int i, j, n;
    float a[100];
    do {
        scanf("%d", &n);
    } while (n<=0 || n>=100);
    for (i=1; i<=n; i++)
    {
        scanf("%f", &a[i]);
    }
    for (i=1; i<=n; i++)
    {
        for (j=i+1; j<=n; j++)
        {
            if (a[i] < 0 && a[j] < 0)
            {
                if (a[i] < a[j])
                {
                    float temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
    for (i=1; i<=n; i++)
    {
        printf("%.2f ", a[i]);
    }
    return 0;
}