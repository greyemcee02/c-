#include <iostream>
#include <cmath>
using namespace std;

int MIN(int *a, int n){
    int min=abs(a[0]-a[1]);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(i!=j)
                if(abs(a[i]-a[j])<min) min=abs(a[i]-a[j]);
        }
    }
    return min;
}

void run(){
    int t, n, q;
    cin >> t;
    while(t--){
        cin >> n;
        int *a=new int [n];
        for(int i=0;i<n;i++) cin >> a[i];
        cout << MIN(a,n) << endl;
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}     