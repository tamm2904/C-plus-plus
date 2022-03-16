/****************************************************************
*	Lab 01, Bai 12
*	Tac gia: Le Minh Tam , MSSV: 2021600528
*	Lop: CNTT01 - K16, Khoa CNTT.
*****************************************************************/

#include <iostream>
using namespace std;
int main() {
    float C, F;
    cout << "F = ";
    cin >> F;
    float so1 = 5;
    float so2 = 9;
    C = (so1/so2)*(F-32);
    cout << "C = " << C;
    return 0;
}