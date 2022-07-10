#include <iostream>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n;
    b = n / 10; //2
	do{
		c = n + 3 * b; //24 + 6 = 30  24 + 9 = 33
		a = b; // 2 3
		b = c / 10; // 3 3
	}while (a != b);
    cout << n +3*b;
    return 0;
}