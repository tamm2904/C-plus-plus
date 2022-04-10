#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[100];
    gets(str);
    cout << strlwr(str); //hoa sang thuong
    // strupr(str) //thuong sang hoa
    return 0;
}