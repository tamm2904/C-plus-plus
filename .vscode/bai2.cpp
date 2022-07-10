#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int max_p(int *p, int n) {
    int max = p[0];
    for (int i=0; i<n; i++)
        if (max < p[i]) max = p[i];
    return max;
}

void delete_x(int *p, int &n, int vt) {
    int i;
    for (int i=vt; i<n-1; i++)
        p[i] = p[i+1];
    n--;
}
void sort(int *p, int n) {
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            if (p[i] > p[j]){
                int temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
}

int main() {
    int n, x, *p;
    cout << "Nhap n: "; cin >> n;
    //------------------------------
    ofstream fpt ("abc2006.txt");
    p = new int[n];
    for (int i=0; i<n; i++) {
        cout << "Phan tu thu " << i+1 << " la: ";
        cin >> *(p+i);
        fpt << *(p+i) << " ";
    }
    //------------------------------
    sort(p,n);
    fpt << endl;
    for (int i=0; i<n; i++)
        fpt << *(p+i) << " ";
    
    //------------------------------
    cout << "Nhap x: "; cin >> x;
    int sum = 0;
    for (int i=0; i<n; i++)
        if (abs(*(p+i)) < abs(x)) sum += *(p+i);
    fpt << endl << "Tong cac phan tu co tri tuyet doi nho hon " << x << " la: " << sum;
    //------------------------------
    for (int i=0; i<n; i++)
        if (*(p+i) == max_p(p,n)) {
            delete_x(p,n,i);
            i--;
        }
    fpt << endl;
    for (int i=0; i<n; i++)
        fpt << *(p+i) << " ";
    fpt.close();
    delete []p;
    return 0;
}