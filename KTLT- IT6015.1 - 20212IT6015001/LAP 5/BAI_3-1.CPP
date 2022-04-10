#include <iostream>
using namespace std;

void in_mang(int a[], int n) {
    cout << "Diem sinh vien da nhap la: \n";
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void copy_mang(int a[], int b[], int n) {
    for (int i=0; i<n; i++)
        b[i] = a[i];
    cout << endl;
}

void day_tang(int a[], int n) {
    cout << "Danh sach diem theo thu tu tang dan la: \n";
    
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void day_giam(int a[], int n) {
    cout << "Danh sach diem theo thu tu giam dan la: \n";
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int diem_sv[1000], diem_sv_sorted[1000], n;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> diem_sv[i];
    in_mang(diem_sv,n);
    copy_mang(diem_sv,diem_sv_sorted,n);
    day_tang(diem_sv_sorted,n);
    day_giam(diem_sv_sorted,n);
    return 0;
}