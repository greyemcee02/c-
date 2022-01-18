#include <iostream>
#include <cmath>
using namespace std;


void run(){
    int t;
    char C;
    cin >> t;
    while(t--){
        cin >> C;
        if(C>'Z') cout << (char)(C-32);
        else cout << (char)(C+32);
        cout << endl;
    }
}

int main(){
    run();
    return 0;
}