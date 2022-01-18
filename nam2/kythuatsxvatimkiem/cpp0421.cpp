#include <iostream>
#include <cmath>
using namespace std;

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int *a=new int [n+1];
        long long tmp;
        for(int i=0;i<n;i++) a[i]=-1;
        for(int i=0;i<n;i++){
            cin >> tmp;
            if(tmp<n) a[tmp]=tmp;
        } 
        for(int i=0;i<n;i++)
            cout << a[i] <<  " "; 
        cout << endl;
        //delete[] a;
    }
}

int main(){
    run();
    return 0;
}     