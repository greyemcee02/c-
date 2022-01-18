#include <iostream>
#include <cmath>
using namespace std;

// int search(int *A,int left, int right){
//     int mid=(right+left)/2;
//     if(A[mid]>A[mid+1] && A[mid]>=A[mid-1]) return mid;
//     if(A[mid]>A[mid+1] && A[mid] < A[mid-1]) return search(A,left,Mid);
//     if(A[mid]<A[mid+1]) return search(A,mid,right);
// }

void run(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n;
        int *a=new int [1000001];
        for(int i=1;i<1000000;i++) a[i]=0;
        for(int i=0;i<n;i++){
            int tmp;
            cin >> tmp;
            if(tmp>0) a[tmp]=1;
        }
        for(int i=1;i<1000000;i++) if(a[i]==0){
            cout << i << endl;
            break;
        }
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}     