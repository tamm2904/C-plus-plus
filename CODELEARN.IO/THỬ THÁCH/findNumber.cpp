// Một số được gọi là số tăng giảm nếu các chữ số trong số này tạo thành một dãy số giảm dần 
// (số đứng sau luôn nhỏ hơn hoặc bằng số đứng trước) hoặc dãy số tăng dần (số đứng sau luôn lớn hơn hoặc bằng số đứng trước). Ví dụ:

// Các số tăng giảm: 7, 22, 6522, 4667, 9651, 7899, ...
// Các số không phải là số tăng giảm: 121, 486, 9878, ...
// Cho trước số nguyên n, bạn hãy viết hàm trả về số tăng giảm nhỏ nhất mà lớn hơn hoặc bằng n.

// Ví dụ:

// Với n = 8 thì output là findNumber(n) = 8.
// Với n = 565 thì output là findNumber(n) = 566.
// Đầu vào/Đầu ra

// [Giới hạn thời gian chạy]: 0.2 giây với C++, 1.2 giây với Java và C#, 1.6s với Python, GO và Js
// [Đầu vào] Integer n
// 1 <= n <= 1000000000
// [Đầu ra] Integer

#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int arr[10], dodai;
string so;

void convert_str(int n) {
    ostringstream convert;   
    convert << n;      
    so = convert.str(); 
}

void convert_arr(string s) {
    string str;
    dodai = s.length();
    for (int i=0; i<dodai; i++) {
        str = s[i];
        arr[i] = stoi(str);
        
    }
}
bool checktang() {
    for (int i=0; i<dodai; i++)
        if (arr[i] > arr[i+1])
            return false;
    return true;
}
bool checkgiam() {
    for (int i=0; i<dodai; i++)
        if (arr[i] < arr[i+1])
            return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    if (n<=10)
        cout << n;
    else {
        bool check=true;
        // while (check) {
            convert_str(n);
            convert_arr(so);
            // for (int i=0; i<dodai; i++)
            // cout << arr[i] << " ";
            if (checktang()==true || checkgiam()==true) {
                check = true;
                cout << n;
                // break;
            }
            // else {
            //     n++;
            // }
        

    }
    return 0;
}