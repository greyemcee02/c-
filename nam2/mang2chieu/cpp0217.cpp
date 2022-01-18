#include<iostream>

using namespace std;

void input(int **a, int n){
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++) cin >> a[i][j];
}

void sort(int **a, int n){
    int i1,i2,j1,j2;
    for(int i1=0;i1<n;i1++)
    for(int j1=0;j1<n;j1++)
    for(int i2=i1;i2<n;i2++){
        int j2=0;
        if(i2==i1) j2=j1;
        for(j2;j2<n;j2++) 
        if(a[i2][j2]<a[i1][j1]){
            int tmp=a[i1][j1];
            a[i1][j1]=a[i2][j2];
            a[i2][j2]=tmp;
        }
    }
    
}

void run(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int **a;
        a=new int* [n];
        for(int i=0;i<n;i++)
        a[i]= new int [n];
        input(a,n);
        sort(a,n);
        int i=k/n,j=k%n-1;
        if(k%n==0){
            i=k/n - 1;
            j=n-1;
        }
        cout << a[i][j] << endl;
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}