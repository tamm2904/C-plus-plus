#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float p, r, n, amount;
    cin >> p >> r >> n;
    cout << "Year\tAmount on deposit\n";
    for (int i=1; i<=n; i++) {
        amount = p*pow(1+r,i);
        cout << " " << i << "\t      "<< amount << endl;
    }
    return 0;
}