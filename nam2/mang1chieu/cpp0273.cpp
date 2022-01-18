#include<iostream>

using namespace std;

int kt(int *arr, int n, int L, int R){
    for(int i=1;i<n-1;i++){
        if(L==R) return i+1;
        L+=arr[i];
        R-=arr[i+1];
    }
    return -1;
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int *arr = new int[n];
        long long L, R=0;
        cin >> arr[0]>> arr[1];
        L=arr[0];
        for(int i=2;i<n;i++){
            cin >> arr[i];
            R+=arr[i];
        }
        cout << kt(arr,n,L,R) << endl;
    }
}

int main(){
    run();
    return 0;
}