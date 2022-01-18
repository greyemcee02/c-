#include<iostream>
#include<string>
using namespace std;

long long duA(string A, long long M){
    long long du=0;
    for(int i=0;i<A.length();i++){
        du=(du*10+(A[i]-'0')%M)%M;
    }
    return du;
}

long long kq(string A, long long b, long long M){
    long long s=duA(A,M);
    long long kqd=1;
    while(b>0){
        if(b%2!=0){
            kqd=(kqd*s)%M;
        }
        s=s*s%M;
        b/=2;
    }
    return kqd;
}

int main(){
    int t;
    string a;
    long long b, M; 
    cin >> t;
    while(t--){
        cin >> a >> b >> M;
        cout << kq(a,b,M) << endl;
    }
    return 0;
}