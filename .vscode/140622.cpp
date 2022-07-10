#include <iostream>
using namespace std;

int main() {
    int n, t=0;
    cin >> n;
    // int a[n], b[n];
    for (int i=n; i>=1; i--)
        for (int j=1; j<n; j++) 
            if ((j-i+1)*(i+j)/2==n) { 
                t++;
                // a[t] = i; b[t] = j;
                cout << i << " " << j << endl;
            }
    cout << t << endl;
    // for (int i=1; i<=t; i++) 
    //     cout << a[i] << " " << b[i] << endl;
    return 0;
}