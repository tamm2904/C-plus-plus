#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void nhap(int &n, int &m, float &x) {
    cin >> n >> m;
    cin >> x;
    if (n<m) {
        int temp = n;
        n = m;
        m = temp;
    }
}
double tinh(int n, float x) {
    double f = 2020*abs(n*x);
    for (int i=1; i<=n; i++) {
        f += x/(2*n-i);
    }
    return f;
}
int main() {
    int n,m;
    float x;
    nhap(n,m,x);
    cout << setprecision(3) << fixed << tinh(n,x) - tinh(m,x);
    return 0;
}