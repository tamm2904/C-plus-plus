#include<iostream>
#include<string.h> 
#pragma warning(disable:4996) 
using namespace std;

void xoadaucuoi(string &str)
{
	while (str[0] == ' ')
	{
		str.erase(str.begin() + 0); 
	}
	while (str[str.length()-1] == ' ')
	{
		str.erase(str.begin() + str.length() - 1);
	}
}

void xoagiua(string &str)
{
	for (int i=0; i<str.length(); i++)
	{
		if (str[i]==' ' && str[i+1]==' ')
		{
			str.erase(str.begin() + i);
			i--;
		}
	}
}

void inhoa(string &str)
{
	strlwr((char *)str.c_str());

	if (str[0] != ' ')
	{
		if (str[0]>=97 && str[0]<=122)
		{
			str[0] -= 32;
		}
		
	}
	for (int i=0; i<str.length()-1; i++)
	{
		if (str[i]==' '&&str[i + 1]!=' ')
		{
		
			if (str[i+1]>=97 && str[i + 1]<=122)
			{
				str[i+1] -= 32; 
			}
		}
	}
}
int main()
{
	string str;
	getline(cin, str);
	xoadaucuoi(str);
	xoagiua(str);
	inhoa(str);
	cout << str;
	return 0;
}