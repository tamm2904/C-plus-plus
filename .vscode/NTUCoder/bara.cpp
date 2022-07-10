#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if (n<=k) { 
        cout << "10";
        return 0;
    }
    n *= 2;
    int temp = n/k;
    if (n%k != 0) temp++;
    int sum = temp*5;
    cout << sum;
    return 0;
}