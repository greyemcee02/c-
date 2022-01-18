#include<iostream>

using namespace std;
long long E = 1000000000+7;
int main(){
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n >>x;
        int *A=new int [n];
        for(int i=0;i<n;i++) cin >> A[i];
        long long s=0, mu=1;
        for(int i=n-2;i>=0;i--){
            mu*=x;
            mu=mu%E;
            s=(s+(mu*A[i])%E);
        }
        s=s+A[n-1];
        s%=E;
        cout << s << endl;
    }
    
    return 0;
}