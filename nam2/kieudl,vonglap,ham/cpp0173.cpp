#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

long long bcnn(long long X, int Y){
    long long bc=(long long)X*Y;
    while(Y>0){
        int tmp=Y;
        Y=X%Y;
        X=tmp;
    }
    return  bc/X;
}

long long kq(int X, int Y, int Z, int N){
    long long KQ = bcnn(X,Y), tmp=1;
    KQ=bcnn(KQ,Z);
    for(int i=1;i<N;i++) tmp*=10;
    if(KQ>=tmp*10) return -1;
    if(KQ>=tmp&&KQ<tmp*10) return KQ;
    if(tmp%KQ==0) return tmp;
    long long a = (long long)(tmp/KQ)+1;
    return a*KQ;
}

void run(){
    long long t, X, Y, Z, N;
    cin >> t;
    while(t--){
        cin >> X >> Y >> Z >> N;
        cout << kq(X, Y, Z, N) << endl;
    }
}

int main(){
    run();
    return 0;
}