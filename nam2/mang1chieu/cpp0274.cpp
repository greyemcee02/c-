#include <iostream>
#include <cmath>
using namespace std;

void create(int *a, int n){
    int *dd = new int [n], kq=0;
    for(int i=0;i<n;i++) dd[i]=0;
    for(int i=0;i<n;i++){
        if(dd[i]==0){
            dd[i]=1;
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    dd[i]++;
                    dd[j]=-1;
                }
            }
            if(dd[i]>1)
            kq+=dd[i];
        }
    }
    cout << kq << endl;
    delete[] dd;
}

void run(){
    int t, n, q;
    cin >> t;
    while(t--){
        cin >> n;
        int *a=new int [n];
        for(int i=0;i<n;i++) cin >> a[i];
        create(a,n);
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}     