#include <math.h>
#include <iostream>
using namespace std;
void inp(int a[], int &n, int &x) {
    do cin >> n;
    while (n<1 && n>50);
    for (int i=0; i<n; i++)
    cin >> a[i];
    cin >> x;
    cout << endl;
}
void outp(int a[], int n) {
    for (int i=0; i<n; i++)
    cout << a[i] << " ";
    cout << endl;
}
void absnegative(int a[], int n) {
    int sum = 0, d = 0;
    for (int i=0; i<n; i++)
    if (a[i] < 0 && abs(a[i]) < 8) {
        cout << a[i] << " ";
        sum += a[i];
        d++;
    }
    if (d != 0) cout << float(sum/d) << endl;
    else cout << "0" << endl;
}
void maxfix(int a[], int n) {
    int max = a[0], max2 = 0;
    for (int i=0; i<n; i++) 
        if (max < a[i]) max = a[i];
    for (int i=0; i<n; i++) {
        if (max == a[i])
            continue;
        else if (max2 < a[i])
            max2 = a[i];
    }
    cout << max2 << endl;
}
void chen(int &n, int a[], int x, int vt) {
    int i;
    for (i=n; i>vt; i--) {
        a[i] = a[i-1];
    }
    a[i+1] = x;
    n++;
}
void chenx(int a[], int n, int x) {
    for (int i=0; i<n; i++)
        if (a[i]<x) {
            chen(n,a,x,i);
            i++;
        }
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
}
int main() {
    int a[100], n, x;
    inp(a,n,x);
    outp(a,n);
    absnegative(a,n);
    maxfix(a,n);
    chenx(a,n,x);
    return 0;
}