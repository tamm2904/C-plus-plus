#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int nhap(int &n, float &x) {
    cout << "n = ";
    do {
        cin >> n;
    } while (n < 1);
    cout << "x = ";
    cin >> x;
}
int tinh(int &n, float &x) {
    float L = 0;
    if (n % 2 == 0) 
        L = fabs(log2(x) + exp(n) + 2021);
    else {
        L = 2021;
        for (int i=1; i<=n; i++) 
            L += (2*i - 1)/pow(x,i);
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