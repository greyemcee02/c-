#include <iostream>
#include <cmath>
using namespace std;

void kq(int n){
    int arr[n][n];
    for(int i=0;i<n;i++){
        if(i%2==0) for(int j=0;j<n;j++) cin >>arr[i][j];
        else for(int j=n-1;j>=0;j--) cin >> arr[i][j];
    }
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++) cout << arr[i][j] << " ";
    cout << endl;
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        kq(n);
    }
}

int main(){
    run();
    return 0;
}     