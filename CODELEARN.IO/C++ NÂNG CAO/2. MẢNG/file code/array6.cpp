// Bài tập
// Cho mảng các số nguyên n phần tử được nhập từ bàn phím (mảng này được cấp phát động và quản lý thông qua con trỏ arr), bạn hãy viết chương trình tính tổng của các phần tử trong mảng và hiển thị ra màn hình:

// Sum = {P}
// Với {P} là tổng của các phần tử trong mảng.

// Nếu bạn chưa biết về khái niệm cấp phát bộ nhớ động thì có thể xem phần lý thuyết bên dưới.


#include <iostream> 

using namespace std;

int main() {
	int n;
	int* arr;
	cin >> n;
	// Thực hiện cấp phát bộ nhớ động cho mảng
	arr = new int[n];
	// Nhập dữ liệu cho mảng
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	// Tính tổng các phần tử trong mảng và lưu vào biến sum
	int sum = 0;
	for (int i = 0; i<n; i++)
		sum += arr[i];
	cout << "Sum = " << sum;
	delete []arr;
	return 0;
}