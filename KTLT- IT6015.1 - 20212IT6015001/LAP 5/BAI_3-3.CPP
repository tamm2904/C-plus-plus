#include <iostream>
using namespace std;

void in_mang(int a[], int n) {
    cout << "Day so da nhap la: ";
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;
}
void Insert(int &n, int a[], int x, int vt) {
    int i;
    for (i=n; i>vt; i--) {
        a[i] = a[i-1];
    }
    a[i] = x;
    ++n;
}
void Insertx(int a[], int &n, int x) {
    for (int i=0; i<n; i++)
        if (x < a[i+1] && x >= a[i]) {
            Insert(n,a,x,i+1);
            i++;
        }
    cout << "Day so sau khi chen them so " << x << " la: ";
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;
}
int main() {
    int a[1000], n, i=0, x;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    do {
        i = 0;
        cout << "Nhap cac phan tu mang theo thu tu tang dan: \n";
        while (i < n) {
            cout << "Phan tu thu " << i+1 << ": ";
            cin >> a[i];
            if (i>0 && a[i] < a[i-1]) break;
            ++i;
        }
    }
    while (i != n);
    cout << "Nhap so can chen: ";
    cin >> x;
    
    in_mang(a,n);
    Insertx(a,n,x);
    return 0;
}