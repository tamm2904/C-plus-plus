#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if ((m==1) || (m==3) || (m==5) || (m==7) || (m==8) || (m==10) || (m==12))
    {
        printf("31 ngay");
    }
    if ((m==4) || (m==6) || (m==9) || (m==11))
    {
        printf("30 ngay");
    }
    if (m==2) {
        if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
        {
            printf("29 ngay");
        }
        else
        {
            printf("28 ngay");
        }
    }
    return 0;
}
