#include <iostream>
using namespace std;

void nhap(int &a, int &b, int &c) {
    cout << "Nhap a, b, c = ";
    cin >> a >> b >> c;
}
int n_max(int a, int b) {
    int mmax = a;
    if (a<b) mmax = b;
    return mmax;
}

int main() {
    int a, b, c;
    nhap(a,b,c);
    cout << "So lon nhat la: " << n_max(n_max(a,b),c);
    return 0;
}