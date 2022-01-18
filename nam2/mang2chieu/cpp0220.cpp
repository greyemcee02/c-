#include <iostream>
#include <cmath>
using namespace std;

void ve(int n){
    int tmp, i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> tmp;
            if(i==0||j==0||i==n-1||j==n-1) cout << tmp << " ";
            else cout << " " << " ";
        }
         cout << endl;
    }
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ve(n);
    }
}

int main(){
    run();
    return 0;
}     