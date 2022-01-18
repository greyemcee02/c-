#include<iostream>

using namespace std;

long long maxt(long long ** A, int n){
    long long max=A[0][0];
    for(int i=1;i<n;i++){
        max=(max<A[0][i])?A[0][i]:max;
        for(int j=1;j<=i;j++){
            A[j][i]=A[0][i]*A[j-1][i-1];
            max=(max<A[j][i])?A[j][i]:max;
        } 
    }
    return max;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long **A = new long long *[n];
        for(int i=0;i<n;i++) A[i]=new long long[n];
        for(int i=0;i<n;i++) cin >> A[0][i];
        cout << maxt(A,n) << endl;
    }
    return 0;
}
