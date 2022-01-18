#include<iostream>
#include<cmath>
using namespace std;

int arr[1000001];

void sangnt(){
    for(int i=0;i<1000001;i++) arr[i]=1;
    arr[0]=0;
    arr[1]=0;
    for(int i=2;i<=sqrt(1000001);i++){
        if(arr[i]){
            for(int j=i*i; j < 1000001; j+=i)
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
    int m, n;
    cin >> m >> n;
    if(m<n) output(m,n);
    else output(n,m);
}

int main(){
    run();
    return 0;
}