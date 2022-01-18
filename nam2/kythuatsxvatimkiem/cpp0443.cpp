#include <iostream>
#include <cmath>
using namespace std;

void input(int *a, int n){
    int tmp;
    for(int i=0; i<n-1;i++){
        cin >> tmp;
        a[tmp]=1;
    }
}


void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int *a = new int [n+2];
        for(int i=1;i<=n;i++) a[i]=0;
        input(a,n);
        for(int i=1;i<=n;i++){
            if(!a[i]){
                cout << i << endl;
                break;
            } 
        } 
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}     