#include<iostream>
#include<cmath>
using namespace std;

int *arr = new int[100001];

void sangnt(){
    for(int i=0;i<100001;i++) arr[i]=1;
    arr[0]=0;
    arr[1]=0;
    for(int i=2;i<=sqrt(100001);i++){
        if(arr[i]){
            for(int j=i*i; j < 100001; j+=i)
                arr[j]=0;
        }
    }
}

void output(int m, int n){
    for(int i=m+1;i<n;i++)
        if(arr[i]) cout << i << " ";
}

void run(){
    sangnt();
    int L, R, t;
    cin >> t;
    while(t--){
        cin >> L >> R;
        int dem=0;
        for(int i=L; i<=R;i++) if(arr[i]) dem++;
        cout << dem << endl;
    }
    delete[] arr;
}

int main(){
    run();
    return 0;
}