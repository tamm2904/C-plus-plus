#include <iostream>
using namespace std;

int count(int a[], int n)
{
    int result = 0; 
    for (int i = 0; i < n; i++)
    {
        bool isOccur=false;  
        for (int j = 0; j < i; j++)
            if (a[i] == a[j])
            {
                isOccur = true;
                break;
            }
        if (!isOccur) result++; 
    }
    return result;
}

int main() {
    int n, k, x;
    cin >> n; cin >> k;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> x;
        arr[i] = x % k;
    }
    // int count = 0;
    // for(int i=0; i<n; i++)
    //     for(int j=i+1; j<n; j++) 
    //         if (arr[i] < arr[j]) { 
    //             int temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    // for (int i=0; i<n; i++)
    //     if (arr[i] != arr[i+1]) count++;
    cout << count(arr,n);
    return 0;
}