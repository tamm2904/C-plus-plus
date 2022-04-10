#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    string str, s;
    int sum=0;
    cin >> str;
    for (int i=0; i<str.length(); i++) {
        s = str[i];
        sum += stoi(s);
    }
    if (sum % 10 == 9)
        cout << "YES";
    else cout << "NO";
    return 0;
}