// GCPD (Greatest Common Prime Divisor) được định nghĩa là số nguyên tố lớn nhất là ước của các số nguyên dương cho trước. 
// Nhiệm vụ của bạn là tìm GCPD của hai số nguyên a và b.
// Ví dụ

// Với a = 12 và b = 18, đầu ra là greatestCommonPrimeDivisor(a, b) = 3;
// Với a = 12 và b = 13, đầu ra là greatestCommonPrimeDivisor(a, b) = -1.
// Đầu vào/Đầu ra

// [giới hạn thời gian chạy] 0.5 giây
// [đầu vào] integer a

// Điều kiện tiền đề:
// 2 ≤ a ≤ 150.

// [đầu vào] integer b
// Điều kiện tiền đề:
// 2 ≤ b ≤ 150.

// [đầu ra] integer
// số GCPD của a và b, hoặc -1 nếu nó không tồn tại.


#include <iostream>
#include <math.h>
using namespace std;

bool arr[1000001];
void snt(int n){
    for (int i = 2; i <= n; i++)
        arr[i] = 1;
    arr[0] = arr[1] = 0;
    for (int i = 2; i <= sqrt(n); i++)
    if (arr[i])
        for (int j = 2 * i; j <= n; j += i)
            arr[j] = 0;
}
int greatestCommonPrimeDivisor(int a, int b)
{
    snt(min(a, b));
    int d = 0;
    for (int i = min(a, b); i >= 2; i--)
        if (arr[i] && a % i == 0 && b % i == 0)
            return i;
    return -1;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << greatestCommonPrimeDivisor(a,b);
    return 0;
}