#include <iostream>
using namespace std;
int main() {
    string ten;
    float sl, dg, st, gtgt;
    getline(cin,ten);
    cin >> sl >> dg;
    st = sl * dg;
    gtgt = 0.1*st;
    cout << st << " " << gtgt;
    return 0;
}