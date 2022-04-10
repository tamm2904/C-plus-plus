#include <iostream>
using namespace std;
 
const int MAX = 1e6;
int cnt[MAX];
 
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++) cnt[i] = 0;
    for(int i=0; i<n; i++){
        cnt[a[i]]++;
    }
    for(int i=0; i<MAX; i++){
        if(cnt[i] > 0){
            cout << i << " " << cnt[i] << "\n";
        }
    }
}