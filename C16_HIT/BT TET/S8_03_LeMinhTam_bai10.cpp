#include <iostream>
using namespace std;
void nhap(float a[], int &n, int &x) {
    do cin >> n;
    while (n<=0);
    do cin >> x;
    while (x<=0);
    for (int i=1; i<=n; i++)
        cin >> a[i];
}
int xuly(float a[], int n, int &x) {
    int i;
    float tong=0;
    if (n/2 < x) cout << "-1";
    else {
        for (i=n; i>=1; i--){
            if (i%2==0) {
                x--;
                tong += a[i];
            }
            if (x==0) break;
        }
        cout << tong;
    }
}
int main() {
    int n, x;
    float a[100];
    nhap(a,n,x);
    xuly(a,n,x);
    return 0;
}