#include <iostream>
#include <cmath>
using namespace std;

int kq(int a, int m){
    for(int i=0;i<m;i++) if((a*i)%m==1) return i;
    return -1;
}

void run(){
    int t, a, m;
    cin >> t;
    while(t--){
        cin >> a >> m;
        cout << kq(a,m) << endl;
    }
}

int main(){
    run();
    return 0;
}