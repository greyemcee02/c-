#include <iostream>
#include <iomanip>
using namespace std;

double sum(int n){
    double s=0;
    for(int i=1;i<=n;i++) s+= 1.0*1/i;
    return s;
}

void run(){
    int  n;
    cin >> n;
    cout << fixed << setprecision(4) << sum(n);
}

int main(){
    run();
    return 0;
}