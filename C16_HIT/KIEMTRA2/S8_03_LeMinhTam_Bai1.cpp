#include <math.h>
#include <iostream>
using namespace std;
void inp(int a[], int &n) {
    cin >> n;
    for (int i=0; i<n; i++)
    cin >> a[i];
    cout << endl;
}
void outp(int a[], int n) {
    for (int i=0; i<n; i++)
    cout << a[i] << " ";
    cout << endl;
}
void sum_average(int a[], int n) {
    int d=0, sum=0;
    for (int i=0; i<n; i++)
        if (a[i] % 5 == 0 && a[i] % 3 == 0) {
            d++;
            sum += a[i];
        }
    if (d != 0) cout << sum << " " << float(sum/d) << endl;
    else cout << "NO" << endl;
}
bool checkscp(int n) {
    int sqr = sqrt(n);
    if (sqr*sqr == n)
        return true;
    else 
        return false;
}
void Delete(int &n, int a[], int vt) {
    int i;
    for (i = vt; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
}
void Deletescp(int &n, int a[]) {
    int i;
    for (i=0; i<n; i++) {
        if (checkscp(a[i])) {
            Delete(n, a, i);
            i--;
        }
    }
    for (i=0; i<n; i++)
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
void maxmin(int a[], int &n) {
    int max = a[0], min = a[0];
    for (int i=1; i<n; i++) {
        if (max < a[i]) max = a[i];
        if (min > a[i]) min = a[i];
    }
    for (int i=0; i<n; i++)
        if (a[i] == min) {
            Insert(n,a,max,i);
            i++;
        }
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
}
int main() {
    int a[1000], n;
    inp(a,n);
    outp(a,n);
    sum_average(a,n);
    Deletescp(n,a);
    maxmin(a,n);
    return 0;
}