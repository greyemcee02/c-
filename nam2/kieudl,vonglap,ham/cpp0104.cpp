#include <iostream>
#include <cmath>
using namespace std;

long long gt(int n){
    long long g = 1;
    for(int i=2;i<=n;i++)
    g*=i;
    return g;
}

long long sum(int n){
    long long s=0;
    for(int i=1;i<=n;i++)
    s+=gt(i);
    return s;
}

void run(){
    int n;
    cin >> n;
    cout << sum(n) ;
}

int main(){
    run();
    return 0;
}