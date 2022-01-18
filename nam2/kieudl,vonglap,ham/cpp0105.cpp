#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int kt(char *a){
    for(int i=0;i<strlen(a);i++)
        if(a[i]!='0' && a[i] != '6' && a[i]!= '8') 
        return 0;
    return 1;
}

void run(){
    int t;
    cin >> t;
    char *s = new char[10];
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