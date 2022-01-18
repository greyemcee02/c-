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
        int tmp, tmp1;
        cin >> tmp;       
        for(int i=1;i<n;i++){
            cin >> tmp1;
            if(tmp<= tmp1) tmp=tmp1;
        }    
        cout << tmp << endl;
    }
}

int main(){
    run();
    return 0;
}