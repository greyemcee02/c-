#include<iostream>

using namespace std;

long long ucln(long long a, long long b){
    while(b>0){
        long long tmp=b;
        b=a%b;
        a=tmp;
    }
    return a;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n , m;
        cin >> n >> m;
        long long a, b;
        a=(n*(n+1)/2+m)/2;
        b=(n*(n+1)/2-m)/2;
        if((a+b)!=(n*(n+1)/2)||(a-b)!=m) cout << "No" << endl;
        else{
            if(ucln(a,b)==1) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}