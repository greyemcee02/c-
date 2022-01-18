#include<iostream>
using namespace std;

int GCD(int a, int b){
    while(b>0){
        int c=b;
        b=a%b;
        a=c;
    }
    return a;
}

long long LCM(int a, int b){
    long long bc= (long long)a*b;
    return (long long)bc/GCD(a,b);
}

void run(){
    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a  >> b;
        cout << LCM(a,b) << " " << GCD(a,b) << endl;
    }
}

int main(){
    run();
    return 0;
}