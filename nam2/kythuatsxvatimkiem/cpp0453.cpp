#include<iostream>

using namespace std;

void input(int *a, int n){
    for(int i=0;i<n;i++) cin >> a[i];
}

void output(int *a, int n){
    for(int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
}

void merge(int *a, int l, int m, int r){
    int n1=m-l+1, n2=r-m;
    int *L = new int [n1], *R = new int [n2];
    for(int i=0;i<n1;i++) L[i]=a[i+l];
    for(int i=0;i<n2;i++) R[i]=a[m+i+1];
    int i=0,j=0,k=l;
    while(i<n1&&j<n2){
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



void run(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int *a = new int[n];
        input(a, n);
        mergesort(a,0,n-1);
        cout << a[k-1] << endl;
    }
}

int main(){
    run();
    return 0;
}