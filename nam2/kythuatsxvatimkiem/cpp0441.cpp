#include <iostream>
#include <cmath>
using namespace std;

void run(){
    int t, n, X;
    cin >> t;
    while(t--){
        cin >> n >> X;
        int dd=-1, tmp;
        for(int i=1;i<=n;i++){
            cin >> tmp;
            if(tmp==X &&dd==-1) dd=i;
        }
        cout << dd << endl;
    }
}

int main(){
    run();
    return 0;
}     