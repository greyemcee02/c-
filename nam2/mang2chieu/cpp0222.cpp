#include<iostream>

using namespace std;

void input(int **a,int n){
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++) cin >> a[i][j];
}

void swap(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void qsort(int **a, int left, int right, int h){
    int l=left, r=right;
    int pivot = a[h][(l+r)/2];
    while(l<=r){
        while(a[h][l]<pivot) l++;
        while(a[h][r]>pivot) r--;
        if(l<=r){
            swap(a[h][l],a[h][r]);
            l++;r--;
        }
    }
    if(l<right) qsort(a,l,right,h);
    if(r>left) qsort(a,left,r,h);
}

int binarysearch(int **a,int l, int r, int k, int h){
    if(l<=r){
        int m=(l+r)/2;
        if(a[h][m]==k) return 1;
        if(a[h][m]<k) return binarysearch(a,m+1,r,k,h);
        return binarysearch(a,l,m-1,k,h);
    }
    return 0;
}

int kq(int **a,int n){
    int dem=0;
    int * dd = new int [n];
    fill(dd,dd+n,0);
    for(int i=0;i<n;i++){
        if(dd[i]==0){
            dd[i]=1;
            for(int j=i+1;j<n;j++){
                if(a[0][i]==a[0][j]) dd[j]=-1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(dd[i]==-1) continue;
        int d=1;
        for(int j=1;j<n;j++){
            if(!binarysearch(a,0,n-1,a[0][i],j)){
                d=0;
                break;
            }
        }
        if(d==1) dem++;
    }
    delete[] dd;
    return dem;
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int **a = new int *[n];
        for(int i=0;i<n;i++) a[i]=new int [n];
        input(a, n);
        for(int i=0;i<n;i++)
            qsort(a,0,n-1,i);
        cout << kq(a,n) << endl;
        for(int i=0;i<n;i++) delete[] a[i];
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}