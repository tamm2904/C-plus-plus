#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[30],ch;
    fflush(stdin);
    gets(str);
    cin>>ch; 
    int dem=0;
    for (int i=0;i<strlen(str);i++)
        if(str[i]==ch) dem++;
	cout << dem;
    return 0;
}