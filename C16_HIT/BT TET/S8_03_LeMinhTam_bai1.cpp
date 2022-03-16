#include <iostream>
#include <math.h>
#include <stdbool.h>
using namespace std;

void nhap(int &n, int a[], int &x) {
    do cin >> n;
    while (n<1 && n>100);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
}

bool SHH(int a) {
    int i, count=0;
    for (i=1; i<a; i++) {
        if(a%i == 0)
        {
            count += i;
        }
    }
    if (count == a)
        return true;
    return false;
}

bool SCP(int a) {
    if (ceil(sqrt(a)) == sqrt(a))
        return true;
    return false;
}

bool SNT(int a) {
    int i;
    for (i = 2; i < a; i++) {
        if (a % i == 0)
            return false;
    }
    return a > 1;
}

void chen(int &n, int a[], int x, int vt) {
    int i;
    for (i=n; i>vt; i--) {
        a[i] = a[i-1];
    }
    a[i+1] = x;
    n++;
}

void chenx(int &n, int a[], int x) {
    int i;
    int check = 0;
    for (i=0; i<n; i++) {
        if (SCP(a[i])) {
            check = 1;
            chen(n, a, x, i);
            i++;
        }
    }
    if (check == 0) {
        int SNTmax = 0;
        for (i=0; i<n; i++) {
            if (SNT(a[i]) == true && a[i] > SNTmax) {
                check = 1;
                SNTmax = a[i];
            }
        }
        for (int i=0; i<n; i++) {
            if (a[i] == SNTmax) {
                chen(n, a, x, i);
                i++;
            }
        }
    }
    if (check == 0) {
        a[n] = x;
        n++;
    }
    for (i=0; i<n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

void thaysoHH(int n, int a[]) {
    int i;
    for (i=0; i<n; i++) 
        if (SHH(a[i]))
            a[i] = a[i] / 2;

    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

void xoa(int &n, int a[], int vt) {
    int i;
    for (i = vt; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
}

void xoachanle(int &n, int a[]) {
    int i;
    for (i=0; i<n - 1; i++) {
        if (a[i] % 2 == a[i+1] % 2) {
            xoa(n, a, i + 1);
            i--;
        }
    }
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main() {
    int n, x, a[200];
    nhap(n, a, x);
    chenx(n, a, x);
    thaysoHH(n, a);
    xoachanle(n, a);
    return 0;
}