#include<iostream>
using namespace std;

long long GCD(long long a, long long b){
    while(b>0){
        long long c=b;
        b=a%b;
        a=c;
    }
    return a;
}

long long LCM(long long a, int b){
    long long bc= (long long)a*b;
    return bc/GCD(a,b);
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        long long lcm=1;
        for(int i = 2; i<=n;i++)
            lcm = LCM(lcm,i);
        cout << lcm << endl;
    }
}

int main(){
    run();
    return 0;
}