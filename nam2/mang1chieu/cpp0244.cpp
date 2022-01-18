#include <iostream>
#include <cmath>
using namespace std;

void swap(int &a, int &b){
    int tmp=a;
    a=b;
    b=tmp;
}

void sort(int *a, int n){
    for(int i=0;i<n;i++)
    for(int j=n-1;j>i;j--)
        if(a[j]<a[j-1]) swap(a[j],a[j-1]);
}

void run(){
    int n;
    cin >> n;
    int *a = new int [n], *dd=new int [1002];
    for(int i=0;i<1001;i++) dd[i]=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        dd[a[i]]=1;
    }
    sort(a,n);
    for(int i=0;i<n;i++){
        if(dd[a[i]]){
            cout << a[i] << " ";
            dd[a[i]]=0;
        }
    } 
    cout << endl;
    delete[] a;
    delete[] dd;
}

int main(){
    run();
    return 0;
}     