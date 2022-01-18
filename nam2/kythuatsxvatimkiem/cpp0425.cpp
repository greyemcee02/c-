#include <iostream>
#include <cmath>
using namespace std;

void merge(int *a,int l, int m, int r){
    int n1=m-l+1, n2=r-m;
    int *L = new int [n1], *R=new int [n2];
    for(int i=0;i<n1;i++) L[i]=a[l+i];
    for(int i=0;i<n2;i++) R[i]=a[m+i+1];
    int i=0,j=0,k=l;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]) a[k++]=L[i++];
        else a[k++]=R[j++];
    }
    while(i<n1) a[k++]=L[i++];
    while(j<n2) a[k++]=R[j++];
    delete[] L;
    delete[] R;
}

void mergesort(int *a, int l, int r){
    if(l<r){
        int m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}

void sort(int *a, int n){
    int m=n/2;
    int n1=m+1, n2=n-m;
    int *L = new int [n1], *R=new int [n2];
    for(int i=0;i<n1;i++) L[i]=a[i];
    for(int i=0;i<n2;i++) R[i]=a[i+m+1];
    int k=0,i=0,j=0;
    while(k<=n){
        if(k%2==0) a[k++]=L[i++];
        else a[k++]=R[j++];
    }
    delete[] L;
    delete[] R;
}

void run(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n;
        int *a = new int[n];
        for(int i=0;i<n;i++) cin >> a[i];
        mergesort(a,0,n-1); 
        sort(a,n-1);
        for(int i=0;i<n;i++) cout << a[i] << " ";
        cout << endl;
    }
}

int main(){
    run();
    return 0;
}     