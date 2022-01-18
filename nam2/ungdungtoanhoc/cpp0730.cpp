#include<iostream>

using namespace std;

long long maX(long long A, long long B){
    return ((A>B)?A:B);
}

long long maxsum(long long * A, int n){
    long long *MAXS=new long long [n], MAX;
    if(n==1) return A[0];
    MAXS[0]=A[0];
    MAX=A[0];
    for(int i=1;i<n;i++){
        MAXS[i]=maX(A[i],MAXS[i-1]+A[i]);
        MAX=maX(MAX,MAXS[i]);
    }
    delete[] MAXS;
    return MAX;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long *A = new long long [n];
        for(int i=0;i<n;i++) cin >> A[i];
        cout << maxsum(A,n) << endl;
        delete[] A;
    }
    return 0;
}
