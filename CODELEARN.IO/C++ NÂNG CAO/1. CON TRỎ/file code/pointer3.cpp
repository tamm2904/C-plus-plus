// Bài tập
// Cho biến a kiểu số nguyên được nhập từ bàn phím, bạn hãy viết hàm tăng giá trị biến a lên 1 và hiển thị ra màn hình:

// New Value of a: {P}
// Với {P} là giá trị của biến a sau khi tăng lên 1.


#include <iostream>

using namespace std;

void change(int* p) {
    (*p)++;
}

int main() {
    int a;
    cin >> a;
    change(&a);
    cout << "New value of a: " << a;
    return 0;
}