#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    float f=0;
    cin >> n;
    if (n%2==0) {
        for (int i=0; i<=n; i++)
            f += (1.0/pow(2,i));
    }
    else f = sqrt(n*n+1);
    cout << "F = " << f;
    return 0;
}