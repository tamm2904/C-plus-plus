#include <iostream>
using namespace std;

void in_mang(int a[], int n) {
    cout << "Chuoi da nhap la: \n";
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
    cout << "Chuoi theo thu tu tang dan la: \n";
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
    cout << "Chuoi theo thu tu nho dan la: \n";
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
void max_min(int a[], int n) {
    // int max=a[0], min=a[0];
    // for (int i=0; i<n; i++) {
    //     if (max < a[i]) max = a[i];
    //     if (min > a[i]) min = a[i];
    // }
    cout << "So lon nhat trong chuoi la: " << a[0] << endl;
    cout << "So nho nhat trong chuoi la: " << a[n-1] << endl;
}
void Insert(int &n, int a[], int x, int vt) {
    n++;
    for (int i=n-1; i>vt+1; i--) {
        a[i] = a[i-1];
    }
    a[vt+1] = x;
}
void Insertx(int a[], int &n, int x) {
    for (int i=0; i<n; i++)
        if (x < a[i+1] && x >= a[i]) {
            Insert(n,a,x,i);
            i++;
        }
    cout << "Chuoi sau khi chen them so " << x << " la: ";
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;
}
void Delete(int a[], int &n, int vt) {
    int i;
    for (i = vt; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
}
void Deletex(int a[], int &n, int vt) {
    int i;
    Delete(a, n, vt-1);
    cout << "Chuoi sau khi xoa phan tu thu " << vt << " la: ";
    for (i=0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;
}
void Tim_kiem(int a[], int n, int giatri) {
    int vt;
    cout << "Vi tri cua phan tu " << giatri << " la: ";
    for (int i=0; i<n; i++) 
        if (a[i] == giatri) {
            vt = i;
            cout << vt << " ";
        }
    cout << endl;
} 
int main() {
    int a[1000], b[1000], n, x, vt, giatri, k, check;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    // cout << "Chon 1 trong cac yeu cau sau: \n";
    // cout << "1. In ra chuoi so theo thu tu tang dan.\n";
    // cout << "2. In ra chuoi so theo thu tu giam dan.\n";
    // cout << "3. In ra so lon nhat, nho nhat trong chuoi da nhap.\n";
    // cout << "4. Nhap them 1 so sau do chen vao dung vi tri da sap xep trong mang.\n";
    // cout << "5. Nhap vao vi tri can xoa, sau do xoa phan tu mang tai vi tri do.\n";
    // cout << "6. Nhap vao gia tri, tim kiem gia tri do trong mang da nhap.\n";
    // cout << "7. Nhap so k (k<N), tach mang b thanh 2 mang b1, b2.\n";
    // cout << "8. Tach mang b thanh 2 mang: mang b1: chua so nguyen am, mang b2: chua so nguyen duong. \n";
    // cout << endl;
    // cout << "Nhap lua chon: ";
    // cin >> check;
    cout << "Nhap so can chen: ";
    cin >> x;
    cout << "Nhap vi tri can xoa: "; 
    cin >> vt;
    cout << "Nhap gia tri can tim kiem: "; 
    cin >> giatri; 
    cout << "Nhap so k: ";
    cin >> k;
    in_mang(a,n);
    copy_mang(a,b,n);
    day_tang(b,n);
    day_giam(b,n);
    max_min(b,n);
    Insertx(b,n,x);
    Deletex(b,n,vt);
    Tim_kiem(b,n,giatri);
    return 0;
}