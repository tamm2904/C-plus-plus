/****************************************************************
*	Lab 01, Bai 11
*	Tac gia: Le Minh Tam , MSSV: 2021600528
*	Lop: CNTT01 - K16, Khoa CNTT.
*****************************************************************/

#include <iostream>
using namespace std;
int main() {
    float C, F;
    cout << "C = ";
    cin >> C;
    float so1 = 5;
    float so2 = 9;
    F = (so2/so1)*C + 32;
    cout << "F = " << F;
    return 0;
}