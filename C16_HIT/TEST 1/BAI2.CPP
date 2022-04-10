#include<stdio.h>
#include<iostream>
using namespace std;

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Sort(int a[], int n){	
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
	        if(a[i] > a[j])  
		        Swap(a[i], a[j]);
} 

int main() {
    int a[10000], n;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    Sort(a, n);
    int p = a[n-1]*a[n-2]*a[n-3];
    cout << p;
    return 0;
}