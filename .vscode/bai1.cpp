#include <bits/stdc++.h>
using namespace std;

void inp(int &n, float &x) {
    cout << "Nhap n: ";
    do {
        cin >> n;
        if (n<=0) cout << "n khong duong. Nhap lai: ";
    } while (n<=0);
    cout << "Nhap x: "; cin >> x;
}
int f_n(int n) {
    int f=1;
    for (int i=1; i<=n; i++)
        f *= 2*i -1;
    return f;
}
float p_xn(float x, int n) {
    float p = abs(x);
    for (int i=2; i<=n; i++)
        p += 1.0*i/f_n(i);
    return p;
}
int main() {
    int n;
    float x;
    inp(n,x);
    cout << "P(" << x << "," << 2*n << ") = " << p_xn(x,2*n);
    return 0;
}