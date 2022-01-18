#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int kt(char *a){
    int len = strlen(a);
    for(int i=0;i<len/2;i++)
        if(a[i]!=a[len-i-1]) 
        return 0;
    return 1;
}

void run(){
    int t;
    cin >> t;
    char *s = new char[19];
    while(t--){
        cin >> s;
        if(kt(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    delete[] s;
}

int main(){
    run();
    return 0;
}