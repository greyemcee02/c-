#include <iostream>
#include <cmath>
using namespace std;


void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int *a=new int [n+1], *dd = new int [1000001], d=-1 ;
        for(int i=0;i<1000001;i++) dd[i]=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            dd[a[i]]++;
            if(d==-1&&dd[a[i]]==2) d=a[i];
        }
        cout << d << endl;
        delete[] dd;
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}     