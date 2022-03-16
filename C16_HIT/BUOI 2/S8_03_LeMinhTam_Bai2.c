#include <stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if ((a>=2) && (a<=50))
        {
        float t = a/3;
        printf("%.3f", t*t*t*t);
        }
    return 0;
}
