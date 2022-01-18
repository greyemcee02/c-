#include <iostream>
#include <cmath>
using namespace std;

void out(int *a, int n){
    for(int i=0;i<=2;i++){
        while(a[i]>0){
            cout << i <<" ";
            a[i]--;
        }
    }
    cout << endl;
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int *a = new int[3], tmp;
        a[0]=0; a[1]=0; a[2]=0;
        for(int i=0;i<n;i++){
            cin >> tmp;
            a[tmp]++;
        }
        out(a,n);
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}     