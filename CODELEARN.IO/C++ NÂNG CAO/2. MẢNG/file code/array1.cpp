// Bài tập
// Cho mảng số nguyên n phần tử  arr được nhập từ bàn phím, bạn hãy viết hàm trả về phần tử lớn nhất trong mảng arr sử dụng con trỏ và hiển thị ra màn hình:

// Max value = {P}
// Với {P} là giá trị của phần tử lớn nhất trong mảng.


#include <iostream>

using namespace std;

int getMaxValue(int* p, int n) {
    int max = p[0];
    for (int i=0; i<n; i++)
        if (max < p[i]) max = p[i];
    return max;
}

int main() {
    int n;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Max value = " << getMaxValue(arr, n);
    return 0;
}