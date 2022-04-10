#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    float x, s=0;
    cin >> x >> n;
    if (n%2==0) {
        for (int i=0; i<n; i++)
            s += pow(x,i+1)/pow(3,i);
    }
    else s = 0;
    cout << "S = " << s;
    return 0;
}