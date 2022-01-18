#include <iostream>
#include <cmath>
using namespace std;

void run(){
    int t, n, X;
    cin >> t;
    while(t--){
        cin >> n >> X;
        int vt, tmp;
        for(int i=1;i<=n;i++){
            cin >> tmp;
            if(tmp==X) vt=i;
        }
        cout << vt << endl;
    }
}

int main(){
    run();
    return 0;
}     