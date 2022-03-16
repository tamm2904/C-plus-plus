#include <iostream>
using namespace std;

void nhap(int a[], int &n) {
    do cin >> n;
    while (n<=3 && n>100);
    for (int i=0; i<n; i++)
        cin >> a[i];
}
int xuly(int a[], int &n) {
    int sole[100], sochan[100], i, j, stt=0;
    for (i=0; i<n; i++)
        if (a[i] % 2 != 0) {
            sole[stt] = a[i];
            stt++;
        }
    for (i=0; i<stt; i++)
        for (j=i+1; j<stt; j++)
            if (sole[i] < sole[j]) {
                int temp = sole[i];
                sole[i] = sole[j];
                sole[j] = temp;
            }
    for (i=0; i<stt; i++)
        cout << sole[i] << " ";
    for (i=0; i<n; i++)
        if (a[i] == 0)  
            cout << a[i] << " ";
    stt = 0;
    for (i=0; i<n; i++)
        if (a[i] % 2 == 0 && a[i] != 0) {
            sochan[stt] = a[i];
            stt++;
        }
    for (i=0; i<stt; i++)
        for (j=i+1; j<stt; j++)
            if (sochan[i] > sochan[j]) {
                int temp = sochan[i];
                sochan[i] = sochan[j];
                sochan[j] = temp;
            }
    for (i=0; i<stt; i++)
        cout << sochan[i] << " ";
}
int main() {
    int n, a[100];
    nhap(a,n);
    xuly(a,n);
    return 0;
}