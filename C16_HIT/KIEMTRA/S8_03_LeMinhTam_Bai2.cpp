#include <iostream>
using namespace std;

void nhap(int a[], int &n, int &x, int &s) {
    do {
        cin >> n;
    } while (n<1 || n>100);
    for (int i=1; i<=n; i++) 
        cin >> a[i];
    cin >> x;
    cin >> s;
}

int chenpt(int a[], int so, int vt, int &n) {
    n++; vt--;
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
bool sohoanhao(int a) {
    int sum=0;
    for (int i=1; i<a; i++)
        if (a%i==0) sum+=i;
    if (sum==a) return true;
    else return false;
}

int cau2a(int a[], int &n) {
    int i, j;
    for (i=1; i<=n; i++)
        for (j=i+1; j<=n; j++)
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    for (i=1; i<=n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

int cau2b(int a[], int &n, int x) {
    int i, j;
    for (i=1; i<=n; i++)
        if (sohoanhao(a[i])) chenpt(a,x,i,n);
    for (i=1; i<=n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

int cau2c(int a[], int &n) {
    int i, j;
    for (i=1; i<=n; i++)
        cout << a[i] << " ";
}

int main() {
    int n, x, s, a[100];
    nhap(a,n,x,s);
    cau2a(a,n);
    cau2b(a,n,x);
    return 0;
}