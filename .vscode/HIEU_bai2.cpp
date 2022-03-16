#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float t, t1, l, l1, h, h1;
    cin >> t >> l >> h;
    cin >> t1 >> l1 >> h1;
    float tb = (t*t1+l*l1+h*h1)/(t1+l1+h1);
    cout << fixed << setprecision(1) << tb;
    return 0;
}