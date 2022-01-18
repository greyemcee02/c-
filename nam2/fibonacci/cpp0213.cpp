#include <iostream>
#include <cmath>
using namespace std;

void fibo(int *a){
    for(int i=0;i<=1000;i++) a[i]=0;
    int i=0, j=1;
    a[0]=1;
    a[1]=1;
    while(j<=1000){
        a[j+i]=1;
        j=j+i;
        i=j-i;
    }
}

void run(){
    int t;
    cin >> t;
    int *arr = new int [1001], n;
    fibo(arr);
    while(t--){
        int m=0;
        int *A = new int [100], tmp;
        cin >> n;
        for(int i=1;i<=n;i++){
            cin >> tmp;
            if(arr[tmp]) A[m++]=tmp;
        }
        for(int i=0;i<m;i++)
            cout << A[i] << " ";
        cout << endl;
        delete[] A;
    }
    delete[] arr;
}

int main(){
    run();
    return 0;
}