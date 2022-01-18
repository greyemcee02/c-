#include<iostream>
#include<cmath>
using namespace std;

void swap(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void sort(int *H, int*a, int n ){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(H[j]<H[j-1]){
                swap(H[j], H[j-1]);
                swap(a[j],a[j-1]);
            }
        }
    }
}

void run(){
    int t, n, X;
    cin >> t;
    while(t--){
        cin >> n >> X;
        int *arr = new int[n], *H= new int [n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
            H[i]=abs(X-arr[i]);
        }
        sort(H,arr,n);
        for(int i=0;i<n;i++) cout << arr[i] << " ";
        cout << endl;
        delete[] arr;
        delete[] H;
    }
}

int main(){
    run();
    return 0;
}