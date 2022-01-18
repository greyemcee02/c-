#include <iostream>
#include <cmath>
using namespace std;

// void xoayvong(int *A, int n, int d){
//     int j=0;
//     while(j<d){
//         int tmp=A[0];
//         for(int i=0;i<n-1;i++) A[i]=A[i+1];
//         A[n-1]=tmp; 
//         j++;
//     }
// }

void output(int *A, int n, int d){
    for(int i=d;i<n;i++) cout << A[i] << " ";
    for(int i=0;i<d;i++) cout << A[i] << " ";
    cout << endl;
}

void run(){
    int t, n, d;
    cin >> t;
    while(t--){
        cin >> n >> d;
        int *A = new int [n+1];
        for(int i=0;i<n;i++) cin >> A[i];
        //xoayvong(A,n,d);
        output(A,n,d);
        delete[] A;
    }
}

int main(){
    run();
    return 0;
}