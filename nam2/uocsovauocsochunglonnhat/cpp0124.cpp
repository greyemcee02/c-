#include<iostream>
#include<cmath>
using namespace std;

void pt(int n){
    int m = 0;
    int *a = new int[m], *mu = new int[m];
    if(n%2==0){
        a[m]=2;
        mu[m]=0;
        while(n%2==0){
           mu[m]++; 
           n/=2;
        } 
        m++;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0){
            a[m]=i;
            mu[m]=0;
            while(n%i==0){
                mu[m]++;
                n/=i;
            } 
            m++;
        }
    }
    if(n>1){
       a[m]=n; 
       mu[m]=0;
       mu[m]++;
       m++;
    } 
    for(int i=0;i<m;i++)
        cout << a[i] << " " << mu[i] << endl;
    delete[] a;
    delete[] mu;
}

void run(){
    int n;
    cin >> n;
    pt(n);
}

int main(){
    run();
    return 0;
}