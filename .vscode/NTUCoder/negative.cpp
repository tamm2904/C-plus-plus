#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
using namespace std;

string Binary(long num)
{
    int n = (int)(log2(num));
    return bitset<64>(num).to_string().substr(64 - n - 1);
}

long Dec(string s) {
    return stoi(s, 0, 2);
}

string Negative(string num){
    string str="", st="";
    int len = num.length();
    for (int i=0; i<len; i++) {
        st = num[i];
        if (st=="1") str += "0";
        else if (st=="0") str += "1";
        
    }
    return str;
}

int main() {
    int t;
    cin >> t;
    long a[t];
    for (int i=0; i<t; i++)
        cin >> a[i];
    for (int i=0; i<t; i++) {
        cout << Dec(Negative(Binary(a[i]))) << endl;
    }
    return 0;
}