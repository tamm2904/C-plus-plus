#include <iostream>
using namespace std;

int main() {
    long n,d=0;
    cin >> n;
    long long sum=0;
    while (d<n) {
    	long long x;
    	cin >> x;
        sum += x;
        d++;
    }
    cout << sum;
    return 0;
} 