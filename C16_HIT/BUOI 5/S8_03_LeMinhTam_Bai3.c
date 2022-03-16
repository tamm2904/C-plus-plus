#include <stdio.h>

void nhap(int a[], int *n)
{
    do {
        scanf("%d", &*n);
        if (*n<3 || *n>50) printf("Nhap lai n = ");
    } while (*n<3 || *n>50);

    for (int i=0; i<*n; i++)
        scanf("%d", &a[i]);
}

int check(int a)
{
    if (a<2) return 0;
    else {
        for (int i=2; i<=a/2; i++)
            if (a % i==0) return 0;
        return 1;
    }
}

int num(int a)
{
    int sum=0, temp;
    while (a > 0) 
    {
        temp = a % 10;
        sum += temp;
        a /= 10;
    }
    if (check(sum)) return 1;
    else return 0;
}

void xuly(int a[], int n)
{
    for (int i=0; i<n; i++)
    if (num(a[i])) a[i] = -1;
}

void xuat(int a[], int n)
{
    printf("Day sau khi xu ly:\n");
    for (int i=0; i<n; i++)
        printf("%d ", a[i]);
}

int main()
{
    int a[50];
    int n;
    nhap(a,&n);
    xuly(a,n);
    xuat(a,n);
    return 0;
}