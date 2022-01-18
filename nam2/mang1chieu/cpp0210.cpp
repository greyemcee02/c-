#include <iostream>
#include <cmath>
using namespace std;

int maxh(int *a,int n){
    int max=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]-a[i]>0) max=(max<a[j]-a[i])?a[j]-a[i]:max;
        }
    }
    if(max>=0) return max;
    return -1; 
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int *a=new int [n+1];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        cout << maxh(a,n) << endl;
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}     