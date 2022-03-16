/****************************************************************
*	Lab 01, Bai 10
*	Tac gia: Le Minh Tam , MSSV: 2021600528
*	Lop: CNTT01 - K16, Khoa CNTT.
*****************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float t, t1, l, l1, h, h1;
    cin >> t >> l >> h;
    cin >> t1 >> l1 >> h1;
    float tb = (t*t1+l*l1+h*h1)/(t1+l1+h1);
    cout << "Toan: \t" << t << endl;
    cout << "Ly: \t" << l << endl;
    cout << "Hoa: \t" << h << endl;
    cout << "TB: \t" << fixed << setprecision(1) << tb;
    return 0;
}