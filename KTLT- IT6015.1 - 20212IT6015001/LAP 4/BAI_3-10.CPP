#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int daoso(int n) {
    int res = 0, tmp, m=n;
    while (n > 0){
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
    if (m % 10 == 0)
        cout << "a. 0" << res << "\n";
    else cout << "a. " << res << "\n";
}

void doixung(int n) {
    int res = 0, tmp, m=n;
    while (n > 0){
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
    // if (m % 10 == 0) res *= 10;
    if (m == res) cout << "b. TRUE\n";
    else cout << "b. FALSE\n";
}

bool snt(int n) {
    if (n < 2) {
        return false;
    }
    for (int i=2; i<=sqrt(n); i++)
        if (n % i == 0) {
            return false;
            break;
        }
    return true;
}

string s(unsigned int n) {
    char buf[12];
    memset(buf, 0, sizeof (buf));
    sprintf(buf, "%d", n);
    return string(buf);
}

int tongle(string str) {
    string s;
    int temp, sum = 0;
    for (int i=0; i<str.length(); i++) {
        s = str[i];
        temp = stoi(s);
        if (temp % 2 == 1) sum += temp;
    }
    cout << "d. " << sum << "\n";
}
int tongchan(string str) {
    string s;
    int temp, sum = 0;
    for (int i=0; i<str.length(); i++) {
        s = str[i];
        temp = stoi(s);
        if (temp % 2 == 0) sum += temp;
    }
    cout << "e. " << sum << "\n";
}

void scp(int n) {
    int sqr = sqrt(n);
    if (sqr*sqr == n) cout << "f. TRUE\n";
    else cout << "f. FALSE\n";
}
int main() {
    int n;
    cout << "N = ";
    cin >> n;
    daoso(n);
    doixung(n);
    if (snt(n)) cout << "c. TRUE\n";
    else cout << "c. FALSE\n";
    string str = s(n);
    tongle(str);
    tongchan(str);
    scp(n);
    return 0;
}