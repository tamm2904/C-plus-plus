#include <iostream>
using namespace std;

int sum_check(int i, int j, int arr[]) {
    int sum = 0;
    for (int x=i; x<=j; x++)
        sum += arr[x];
    return sum;
}
int sum_max(int arr[], int n) {
    int max = arr[0], cs;
    for (int i = 0; i<n; i++)
        if (arr[i] > max) { 
            max = arr[i];
            cs = i;
        }
    int sum = 0, temp = 0;
    for (int i=cs; i>0; i--) {
        sum += arr[i];
        if (sum < temp) {
            sum = temp;
            break;
        }
        else temp = sum;
    }
    int sum2 = 0;
    for (int i=cs; i<n; i++) {
        sum2 += arr[i];
        if (sum2 < temp) {
            sum2 = temp;
            break;
        }
        else temp = sum2;
    }
    int sum3 = 0;
    for (int i=cs; i<n; i++)
        for (int j=cs; j>0; j--) {
            sum3 = sum_check(j,i,arr);
            if (sum3 < temp) {
                sum3 = temp;
                break;
            }
            else temp = sum3;
        }

    if (sum > sum2 && sum > sum3) return sum;
    else if (sum2 > sum && sum2 > sum3) return sum2;
    else if (sum3 > sum && sum3 > sum2) return sum2;
}
int main() {
    int n;
    cin >> n;
    int *arr;
    arr = new int[n];
    for (int i=0; i<n; i++)
        cin >> arr[i];
    cout << sum_max(arr,n);
    delete []arr; 
    return 0;
}