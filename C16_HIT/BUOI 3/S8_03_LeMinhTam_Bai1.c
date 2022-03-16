#include <stdio.h>
int main()
{
    int i;
    //------------------------------------
    printf("- for loop:\n");
    for (i=100; i>=1; i=i-1)
    {
        printf("%d ", i);
    }
    //------------------------------------
    printf("\n- while loop:\n");
    i=100;
    while (i>=1)
    {
        printf("%d ", i);
        i=i-1;
    }
    //------------------------------------
    printf("\n- do while loop:\n");
    i=100;
    do {
        printf("%d ", i);
        i=i-1;
    } while (i>=1);
    return 0;
}
