#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a == 0 || b == 0)
        return a + b;
    while (a != b)
        if (a > b) a -= b;
        else b -= a;
    return a;
}
int bcnn(int a, int b) {
    int lcm = a * b / gcd(a, b);
    return lcm;
}
int main() {
    int n, a, b, c, d, count=0;
    cin >> n;
    for (int i=1; i<=n; i++)
        for (int j=n; j>=1; j--)
            for (int k=1; k<=n; k++)
                for (int t=n; t>=1; t--) {
                    if (gcd(i,j) == bcnn(k,t) && i + j + k + t == n){
                        cout << i  << " " << j << " " << k << " " << t << endl;
                        return 0;
                    }
                }
}