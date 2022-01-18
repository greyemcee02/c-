#include<iostream>

using namespace std;

long long solve(int *A, int n){
    long long *MAX= new long long [n];
    long long sum=0;
    //fill(MAX,MAX+n,0);
    //MAX[0]=A[0];
    for(int i=0;i<n;i++){
        MAX[i]=A[i];
        for(int j=0;j<i;j++){
            if(A[i]<=A[j]) continue;
            else{
                long long tmp=MAX[j]+A[i];
                MAX[i]=(MAX[i]<tmp)?tmp:MAX[i]; 
            }
        }
        sum=(MAX[i]<sum)?sum:MAX[i];
    }
    delete[] MAX;
    return sum;
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int *A=new int [n];
        for(int i=0;i<n;i++) cin >> A[i];
        cout << solve(A,n) << endl;
        delete[] A;
    }
    return 0;
}