#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int nhap(int &n, float &x) {
    cin >> x;
    do {
        cin >> n;
    } while (n < 0);
}
int tinh(int n, float x) {
    float L;
    if (n % 2 == 0) {
        L = sqrt((exp(x) + n));
    }
    else {
        L = 2022;
        int lt = 1;
        for (int i=1; i<=n; i++) {
            lt *= x;
            L += (lt-i)/(2*i-1);
        }
    }
    cout << "L = " << setprecision(2) << fixed << L;
}

int main() {
    int n;
    float x;
    nhap(n,x);
    tinh(3*n,2*x);
    return 0;
}