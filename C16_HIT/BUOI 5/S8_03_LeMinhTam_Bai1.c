#include <stdio.h>

void nhap(int a[], int *n)
{
    do {
        scanf("%d", &*n);
        if (*n<1 || *n>99) printf("Nhap lai n = ");
    } while (*n<1 || *n>99);

    for (int i=0; i<*n; i++)
        scanf("%d", &a[i]);
}

int num(int a)
{
    int count=0, temp=a;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }
    return count;
}

int luythua(int a)
{
    int t = 1;
    for (int i=1; i<=num(a)-1; i++) t *= 10;
    return t;
}

int check(int a)
{
    int temp = a, b = num(a), d = 0;
    while (a>1)
    {
        temp = a / luythua(a);
        if (temp == 4 || temp == 7) d++;
        a = a % luythua(a);
    }
    if (d == b) return 1;
    else return 0;
}

void xuat()
{
    printf("Day sau khi xu ly:\n");
}

void xuly(int a[], int n)
{
    int i, j;
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
            if (a[i] > a[j])
            {
                int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
            }
    }

    for (i=0; i<n; i++)
        if (check(a[i])==0) 
            printf("%d ", a[i]);

}

int main()
{
    int a[100];
    int n;
    nhap(a,&n);
    xuat();
    xuly(a,n); 
    return 0;
}
