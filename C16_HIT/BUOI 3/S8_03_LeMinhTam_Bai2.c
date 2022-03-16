#include <stdio.h>
int main()
{
    int i=0;
    while (i<100)
    {
        printf("%-7d", i);
        if (i%10==9)
        {
            printf("\n");
        }
        i++;
    }
    return 0;
}
