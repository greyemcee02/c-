#include<iostream>

using namespace std;

long long maX(long long A, long long B){
    return ((A>B)?A:B);
}

long long maxsum(long long * A, int n){
    long long *MAXS=new long long [n], MAX;
    if(n==1) return A[0];
    MAXS[0]=A[0];
    if(n==2) return maX(A[0],A[1]);
    MAXS[1]=A[1];
    MAXS[2]=maX(A[2],A[0]);
    MAXS[2]=maX(MAXS[2],A[0]+A[2]);
    MAX=maX(MAXS[2],MAXS[1]);
    for(int i=3;i<n;i++){
        MAXS[i]=A[i];
        MAXS[i]=maX(MAXS[i],MAXS[i-2]);
        MAXS[i]=maX(MAXS[i],MAXS[i-2]+A[i]);
        MAXS[i]=maX(MAXS[i],MAXS[i-3]);
        MAXS[i]=maX(MAXS[i],MAXS[i-3]+A[i]);
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
