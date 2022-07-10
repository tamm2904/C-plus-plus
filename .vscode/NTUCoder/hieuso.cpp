#include <iostream>
using namespace std;

int main() {
    int n, k, x, temp, check=0;
    cin >> n; 
    for (int i=0; i<n; i++) {
        k = x;
        cin >> x;
        temp = x - k;
        if (check<temp) check = temp;
    }
    cout << check;
    return 0;
}