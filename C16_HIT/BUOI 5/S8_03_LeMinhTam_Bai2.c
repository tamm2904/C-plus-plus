#include <stdio.h>

void nhap(int a[], int *n, int *x)
{
    do {
        scanf("%d", &*n);
        if (*n<1 || *n>99) printf("Nhap lai n = ");
    } while (*n<1 || *n>99);

    for (int i=0; i<*n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &*x);
}

void geta(int a[], int *n, int x)
{
    int pos=0;
    for (int i=0; i<*n; i++)
        if (a[i]<0) {
            pos = i;
            break;
        }
    if (pos==0)
        pos = *n;
    else pos++;

    for(int i = *n; i > pos; i--)
        a[i] = a[i-1];
    a[pos] = x;
    (*n)++;
}

void xuata(int a[], int n)
{
    printf("-------------Cau a-------------\n");
    for (int i=0; i<n; i++)
        printf("%d ", a[i]);
}

void getb(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    }

    int temp = a[0];
    a[0] = a[n-1];
    a[n-1] = temp;
}

void xuatb(int a[], int n)
{
    printf("\n\n-------------Cau b-------------\n");
    for (int i=0; i<n; i++)
        printf("%d ", a[i]);
}

int main()
{
    int a[100];
    int n, x;
    nhap(a,&n,&x);
    geta(a,&n,x);
    xuata(a,n);
    getb(a,n);
    xuatb(a,n);
    return 0;
}