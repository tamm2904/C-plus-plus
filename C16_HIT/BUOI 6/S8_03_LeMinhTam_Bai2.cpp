#include <iostream>
using namespace std;

int nhap(int &n) {
	cout << "Nhap n = ";
	cin >> n;
}

int check(int a) {
    if (a<2) return 0;
    else {
        for (int i=2; i<=a/2; i++)
            if (a % i==0) return 0;
        return 1;
    }
}

int snt(int a) {
    int count=0, so[100];
    while (a > 0) 
    {
        int temp = a % 10;
        if (check(temp)) {
            count++;
            so[count] = temp;
        } 
        a /= 10;
    }
    cout << "So cac cs la snt la: " << count << "\n";
    cout << "Cac cs do la: ";
    for (int i=count; i>=1; i--)
        cout << so[i] << " ";
}

int main() {
	int n;
	nhap(n);
    snt(n);
	return 0;
}