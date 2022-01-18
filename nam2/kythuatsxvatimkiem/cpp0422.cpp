#include <iostream>
#include <cmath>
using namespace std;



void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int d=0;
        long long tmp;
        for(int i=0;i<n;i++){
            cin >> tmp;
            if(tmp!=0) cout << tmp << " ";
            else d++;
        }
        for(int i=1;i<=d;i++) cout << 0 << " ";
        cout << endl;
    }
}

int main(){
    run();
    return 0;
}     