#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string str, s;
    int num = 0;
    cin >> str;
    for (int i=0; i<str.length(); i++) {
        s = str[i];
        num += stoi(s);
    }
    if (num%10==9) cout << "YES";
    else cout << "NO";
    return 0;
}