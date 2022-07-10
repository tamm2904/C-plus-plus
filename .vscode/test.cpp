#include <iostream>
using namespace std;

int main() {
    int n, *p;
    cout << "n = "; cin >> n;
    p = new int[n];
    for (int i=0; i<n; i++) {
        cout << "Phan tu thu " << i+1 << " la: ";
        cin >> *(p+i);
    }
    for (int i=0; i<n; i++)
        cout << p[i] << " ";
    delete []p;
    return 0;
}