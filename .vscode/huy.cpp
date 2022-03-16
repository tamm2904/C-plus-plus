#include <iostream>
using namespace std;
int main()
{
    float TotalKm;
    float Cost = 0;
    cin >> TotalKm;
    if (TotalKm <= 0 && TotalKm >=10000) 
        cout << "N";
    else {
    if(TotalKm <= 1)
        Cost = TotalKm * 10000;
    else if(TotalKm <= 30 && TotalKm > 1)
        Cost = (TotalKm - 1)*8000 + 1*10000;
    else Cost = 1*10000 + 29*8000 + (TotalKm - 30)*7000;
    cout << Cost;
    }
    return 0;
}