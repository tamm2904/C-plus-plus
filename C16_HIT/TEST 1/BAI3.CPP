#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int a[6], count;
    for (int i=1; i<=6; i++) {
        cin >> a[i];
    }
    // if (a[1]+a[2]-a[3]==0 || a[2]+a[1]-a[3]==0 || a[3]+a[1]-a[2]==0 
    // || a[1]+a[3]-a[2]==0 || a[2]+a[3]-a[1]==0 || a[3]+a[2]-a[1]==0) 
    // cout << "yes\n";
    // else cout << "no\n";
    // if (a[4]+a[5]-a[6]==0 || a[5]+a[4]-a[6]==0 || a[6]+a[4]-a[5]==0 
    // || a[4]+a[6]-a[5]==0 || a[5]+a[6]-a[4]==0 || a[6]+a[5]-a[4]==0) 
    // cout << "yes\n";
    // else cout << "no\n";
    return 0;
}