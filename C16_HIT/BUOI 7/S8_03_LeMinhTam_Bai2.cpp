#include <iostream>
using namespace std;

void nhap(int a[], int &n, int &x) {
    cout << "n = ";
    do {
        cin >> n;
        if (n<1 || n>99) 
            cout << "Nhap lai n = ";
    } while (n<1 || n>99);
    for (int i=1; i<=n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << "x = ";  cin >> x;
}

bool snt(int a) {
    if (a<2) return false;
    else {
        for (int i=2; i<=a/2; i++)
            if (a % i==0) return false;
        return true;
    }
}
bool sochiahet(int a) {
    if (a<3) return false;
    else if (a%3==0 && a%5!=0) return true;
            else return false;
}

int chenpt(int a[], int so, int vt, int &n) {
    n++; vt++;
    for (int i=n; i>vt; i--) 
        a[i] = a[i-1];
    a[vt] = so;
}

void xoapt(int a[], int &n, int vt){
    if(n <= 0)
        return;
    if(vt < 1) 
        vt = 1;
    else if(vt >= n) 
            vt = n;
    for(int i = vt; i < n; i++)
        a[i] = a[i+1];
    n--;
}

int cau2a(int a[], int &n, int x) {
    int i, j;
    for (i=1; i<=n; i++) {
        if (snt(a[i]) && a[i]<10) 
            chenpt(a,x,i,n);
    }
    for (i=1; i<=n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

int cau2b(int a[], int &n) {
    int i, j;
    for (i=1; i<=n; i++) {
        if (sochiahet(a[i])) 
            xoapt(a,n,i);
    }
    for (i=1; i<=n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

int cau2c(int a[], int &n) {
    int i, j;
    for (i=n; i>0; i--) 
        for (j=i-1; j>0; j--)
            if (a[i]==a[j]) xoapt(a,n,i);
    for (i=1; i<=n; i++)
        cout << a[i] << " ";
}

int main() {
    int n, x, a[100];
    nhap(a,n,x);
    cau2a(a,n,x);
    cau2b(a,n);
    cau2c(a,n);
    return 0;
}