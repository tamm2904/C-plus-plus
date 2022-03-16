#include <iostream>
using namespace std;

int nhap(int a[], int &n) {
    cout << "Nhap n = ";
    do cin >> n;
    while (n<3 || n>50);
    for (int i=1; i<=n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

int xuly(int a[], int n) {
    int soam[50], soduong[50], am = 0, duong = 0, i, j;
    for (i=1; i<=n; i++) {
        if (a[i] < 0) {
            am++;
            soam[am] = a[i];
        }
        else {
            duong++;
            soduong[duong] = a[i];
        }
    }
    cout << "Day so sau khi xu ly: ";
    if (am != 0) {
        for (i=1; i<=am; i++) {
            for (j=i+1; j<=am; j++)
                if (soam[i] < soam[j])
                    {
                        int temp = soam[i];
                        soam[i] = soam[j];
                        soam[j] = temp;
                    }
        }
        for (i=1; i<=am; i++)
            cout << soam[i] << " ";
    }

    if (duong != 0) {
        for (i=1; i<=duong; i++) {
            for (j=i+1; j<=duong; j++)
                if (soduong[i] > soduong[j])
                {
                    int temp = soduong[i];
                    soduong[i] = soduong[j];
                    soduong[j] = temp;
                }
        }
        for (i=1; i<=duong; i++)
            cout << soduong[i] << " ";
    }
}

int main() {
    int n, a[50];
    nhap(a, n);
    xuly(a,n);
    return 0;
}