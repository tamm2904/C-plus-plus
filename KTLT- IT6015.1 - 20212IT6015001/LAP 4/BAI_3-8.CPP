#include <iostream>
using namespace std;

// int gt(int n) {
//     int gt=1;
//     for (int i=1; i<=n; i++)
//         gt *= i;
//     return gt;
// }

int gt_2(int n) 
{
    if (n == 1 || n == 0)
        return 1;
    return n * gt_2(n - 1);
}

int main() 
{
    int n;
    do {
        cin >> n;
        if (n>=0)
            cout << n << "! = " << gt_2(n) << "\n";
        else break;
    } while (n>=0);

    return 0;
}