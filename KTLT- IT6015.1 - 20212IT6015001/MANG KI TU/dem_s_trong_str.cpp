#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[100], s[10];
    int count=0;
    gets(str);
    gets(s);
    for (int i=0; i<strlen(str); i++)
        if (str[i]==s[0]) count++;
    cout << count;
    return 0;
}