#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int nhap(int &n, float &x) {
    cout << "x = ";
    cin >> x;
    cout << "n = ";
    do {
        cin >> n;
        if (n<0) cout << "Nhap lai n (n>=0) = ";
    } while (n < 0);
    
}
int giaithua(int a) {
    int gt = 1;
    for (int i=1; i<=a; i++)
        gt = gt*i;
    return gt;
}
int tinh(int &n, float &x) {
    float L = 0;
    int i, j;
    if (n % 2 == 1) {
        L = 2022;
        for (i=1; i<=n; i++) {
            int temp = 0;
            for (j=1; j<=i; j++)
                temp += j;
            L += (pow(x,i) + 2*i) / temp;
        }
    }
    else {
        L = 2021;
        for (i=1; i<=n; i++)
            L += (pow(x,i) + 2*i) / giaithua(i);
    }
    cout << "L = " << fixed << setprecision(4) << L;
}

int main() {
    int n;
    float x;
    nhap(n,x);
    tinh(n,x);
    return 0;
}