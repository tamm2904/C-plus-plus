/****************************************************************
*	Lab 01, Bai 09
*	Tac gia: Le Minh Tam , MSSV: 2021600528
*	Lop: CNTT01 - K16, Khoa CNTT.
*****************************************************************/

#include <iostream>
using namespace std;
int main() {
    string ten;
    float sl, dg, st, gtgt;
    cin >> ten;
    cin >> sl >> dg;
    st = sl * dg;
    gtgt = 0.1*st;
    cout << st << " " << gtgt;
    return 0;
}