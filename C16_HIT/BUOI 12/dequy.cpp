#include <bits/stdc++.h>
using namespace std;

int gt(int n) {
    if (n<=1) return 1;
    return n*gt(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << n << "! = " << gt(n);
}