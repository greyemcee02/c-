#include<bits/stdc++.h>

using namespace std;
long long a;
string b;

long long rd(){
    long long mod = 0;
    for(int i = 0; i < b.length(); i++){
        mod = (mod*10 + b[i] - '0') % a;
    }
    return mod;
}

long long gcd(long long sm, long long lg){
    if(!sm)
        return lg;
    return gcd(lg%sm, sm);
}

long long gcdlg(){
    long long md = rd();
    if(md > a) return gcd(a, md);
    return gcd(md, a);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a == 0) cout << b;
        else
            cout << gcdlg() << endl;
    }
    return 0;
}