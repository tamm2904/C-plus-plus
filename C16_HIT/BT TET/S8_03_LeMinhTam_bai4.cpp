#include <iostream>
#include <math.h>
using namespace std;

void nhap(int &n, float &x) {
    do {
        cin >> n;
    } while (n<=0);
    cin >> x;
}
int gt(int a) {
    int giaithua=1;
    for (int i=1; i<=a; i++)
        giaithua *= i;
    return giaithua;
}

int tinh(int n, float x) {
    float s;
    for (int i=1; i<=n; i++)
        s += pow(-1,i)*pow(x,i)/gt(i);
    cout << s;
}

int main() {
    int n;
    float x;
    nhap(n,x);
    tinh(n,x);
    return 0;
}