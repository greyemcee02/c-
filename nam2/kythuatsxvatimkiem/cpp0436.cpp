#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int *A = new int [n], *dd= new int [1000010], *cpA = new int [n];
        fill(dd,dd+1000010,-1);
        for(int i=0;i<n;i++){
            cin >> A[i];
            cpA[i]=A[i];
        }
        sort(cpA,cpA+n);
        for(int i=0;i<n-1;i++){
            if(cpA[i]==cpA[i+1]) continue;
            else
            dd[cpA[i]]=cpA[i+1];
        }
        for(int i=0;i<n;i++){
            if(dd[A[i]]==-1) cout << "_ " ;
            else cout << dd[A[i]] << " ";
        }
        cout << endl;
        delete[] dd;
        delete[] A;
        delete[] cpA;
    }
    return 0;
}