#include <iostream>
#include <string.h>
using namespace std;
bool check(string a, string b) {
    if (a == b) return true;
    else return false;
}
int main() {
    string s,x,st;
    int d=0;
    getline(cin,s);
    cin >> x;
    for (int i=0; i<s.length(); i++) {
        st = s[i];
        if (check(st,x)) {
            d++;
            cout << i+1 << " ";
        }
    }
    if (d==0) cout << "No";
    return 0;
}