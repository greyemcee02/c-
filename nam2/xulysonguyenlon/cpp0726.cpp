#include<iostream>
using namespace std;

long long kq(long long a, long long b, long long c){
    if(b==0) return 0;
    long long d= kq(a,b/2, c);
    d=(d+d)%c;
    if(b%2!=0) d=(d+a)%c;
    return d;
}

int main(){
    int t;
    long long a, b, c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        cout << kq(a,b,c) << endl;
    }
    return 0;
}