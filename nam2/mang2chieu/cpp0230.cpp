#include <iostream>
#include <cmath>
using namespace std;

int kq(int n){
    int d=0, tmp;
    for(int i=0;i<n;i++){
        int d1=0;
        for(int j=0;j<3;j++){
            cin >> tmp;
            if(tmp) d1++;
        }
        if(d1>1) d++;
    }
    return d;
}

void run(){
    // int t, n;
    // cin >> t;
    // while(t--){
        int n;
        cin >> n;
        cout << kq(n);
    //}
}

int main(){
    run();
    return 0;
}     