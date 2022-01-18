#include <iostream>
#include <cmath>
using namespace std;

void swap(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

int MIN(int *a, int i, int n){
    int min=i;
    for(int j=i+1;j<n;j++) if(a[j]<a[min]) min=j;
    return min;
}

int MAX(int *a, int i, int n){
    int max=i;
    for(int j=i+1;j<n;j++) if(a[j]>a[max]) max=j;
    return max;
}

void sort(int *a, int n){
    for(int i=0;i<n;i++){
        if(i%2!=0) swap(a[i],a[MIN(a,i,n)]);
        else swap(a[i],a[MAX(a,i,n)]);
    }
}

void out(int *a, int n){
    for(int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int *a = new int[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a,n);
        out(a,n);
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}     