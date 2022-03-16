#include <iostream>
#include <string.h>
using namespace std;

void daochuoi(string &s) {
    string st,s1,s2;
    int dau, cuoi, giua;
    dau = s.find(" ");
    for (int i=s.length()-1; i>=0; i--) {
        st = s[i];
        if (st==" ") {
            cuoi = i;
            break;
        }
    }
    giua = cuoi - dau + 1;
    s1 = s.substr(0,dau);
    s2 = s.substr(cuoi+1,s.length()-cuoi-1);
    st = s.substr(dau,giua);
    // cout << s2 << st << s1;
    s = s2 + st + s1;
    cout << s;
}

int main() {
    string s;
    getline(cin,s);
    daochuoi(s);
    return 0;
}