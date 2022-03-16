#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void nhap(int &n, int &m) {
    do {
        cin >> n;
    } while (n<=4);
    do {
        cin >> m;
    } while (m<n);
}
bool check(int a) {
    if (a%3==0) return true;
    else return false;
}
int tong(int n, int m) {
    int t=0;
    for (int i=1; i<=n; i++) 
        if (check(i)) t+=i;
    cout << t << "\n";
    t=0;
    for (int i=n; i<=m; i++) 
        if (check(i)) t+=i;
    cout << t << "\n";
}
float bieuthuc(int n) {
    float p = 0;
    for (int i=1; i<=n; i++)
        p = sqrt(i+p);
    cout << setprecision(3) << fixed << p;
}
int main() {
    int n, m;
    nhap(n,m);
    tong(n,m);
    bieuthuc(n);
    return 0;
}