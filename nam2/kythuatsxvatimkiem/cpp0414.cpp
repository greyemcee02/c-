#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;


void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int *a = new int[10] ;
        char *s = new char[17];
        for(int i=0;i<10;i++) a[i]=0;
        for(int i=0;i<n;i++){
            cin >> s;
            for(int j=0;j<strlen(s);j++)
                a[s[j]-'0']=1;
        }
        for(int i=0;i<10;i++) if(a[i]) cout << i << " ";
        cout <<endl;
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}     