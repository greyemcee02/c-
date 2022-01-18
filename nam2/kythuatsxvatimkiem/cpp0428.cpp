#include <iostream>
#include <cmath>
using namespace std;

void in(int *a, int n){
    for(int i=0;i<n;i++) cin >> a[i];
}

void merge(int *a,int l, int m, int r){
    int n1=m-l+1, n2=r-m,k=l;
    int *L=new int [n1], *R= new int[n2];
    for(int i=0;i<n1;i++) L[i]=a[i+l];
    for(int i=0;i<n2;i++) R[i]=a[i+m+1];
    int i=0, j=0;
    while(i<n1 && j < n2){
        if(L[i]<=R[j]) a[k++]=L[i++];
        else a[k++] = R[j++];
    }
    while(i<n1) a[k++]=L[i++];
    while(j<n2) a[k++]=R[j++];
    delete[] L;
    delete[] R;
}

void mergesort(int *a,int l, int r){
    if(l<r){
        int m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}


void sort(int *a, int *b, int n, int m){
    int *kq = new int [n+m], x=0;
    int i=0, j=0;
    while(i<n && j<m){
        if(a[i]<=b[j]) kq[x++] = a[i++];
        else kq[x++] = b [j++];
    }
    while(i<n) kq[x++] = a[i++];
    while(j<m) kq[x++] = b[j++];
    for(int i=0;i<x;i++) cout << kq[i] << " ";
    cout << endl;
    delete[] kq;
}

void run(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int *a=new int [n], *b=new int[m];
        in(a,n); in(b,m);
        mergesort(a,0,n-1);
        mergesort(b,0,m-1);
        sort(a,b, n,m);
    }
}

int main(){
    run();
    return 0;
}     