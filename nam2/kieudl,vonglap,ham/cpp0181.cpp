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
    int t, a, x, y;
    cin >> t;
    while(t--){
        cin >> a >> x >> y;
        int u=ucln(x,y);
        for( int i=1;i<=u;i++) cout << a ;
        cout << endl;
    }
    return 0;
}