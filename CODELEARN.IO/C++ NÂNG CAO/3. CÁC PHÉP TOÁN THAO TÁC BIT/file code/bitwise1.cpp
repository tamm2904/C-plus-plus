// Bài tập
// Cho 2 số nguyên a, b được nhập từ bàn phím. Bạn hãy viết chương trình hiển thị ra màn hình 
// (a OR b) + (a AND b) với OR và AND là 2 phép toán trên bit.

// Ví dụ nếu bạn nhập a = 113, b = 93 như bên dưới:

// 113 93
// Thì màn hình sẽ hiển thị ra:
// 206


#include<iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << (a | b) + (a & b);
	return 0;
}