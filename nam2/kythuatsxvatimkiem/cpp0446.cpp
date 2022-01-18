#include <iostream>
#include <cmath>
using namespace std;

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int *a=new int [n+1];
        for(int i=0;i<n;i++){
            cin >> a[i];
            
        }
        int tmp=a[0]+a[1];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs(a[i]+a[j])<abs(tmp)) tmp=a[i]+a[j];
            }
        }
        cout << tmp << endl;
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}     