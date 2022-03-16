#include <stdio.h>
int main()
{
    int n,m,t,tong;
    scanf("%d%d",&n,&m);
    t = m*n;
    if ((n>=1) && (n<=999) && (m>=7000) && (m<=200000) && (m%100==0))
    {
        if ((n%2==1) && (n>5)) {
           tong = t - (t*0.2);
        }
        if ((n%2==0) && (n>4)) {
            tong = t - (t*0.15);
        }
        if (((n%2==1) && (n<=5)) || ((n%2==0) && (n<=4))) {
           tong = t;
        }
        printf("%d",tong);
    }
    return 0;
}
