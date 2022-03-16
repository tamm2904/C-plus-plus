#include <stdio.h>
int main()
{
    int n,m,k,t;
    scanf("%d%d%d",&n,&m,&k);
    if ((n>=1) && (n<=20) && (m>=1) && (m<=5) && (k>=10) && (k<=50))
    {
        t = k*m;
        if (t%n == 0) {
            printf("no");
        }
        else {
            printf("yes");
        }
    }
    return 0;
}
