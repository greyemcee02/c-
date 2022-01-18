#include<iostream>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int A[n], l=-1, max, min, r=-1;
        for(int i=0;i<n;i++){
            cin >> A[i];
        }
        for(int i=0;i<n-1;i++) if(A[i]>A[i+1]){
            l=i;
            break;
        } 
        for(int i=n-1;i>0;i--) if(A[i]<A[i-1]){
            r=i;
            break;
        } 
        min=A[l], max=A[l];
        for(int i=l;i<=r;i++){
            min=(min < A[i])?min:A[i];
            max=(max > A[i])?max:A[i];
        }
        for(int i=0;i<l;i++) 
        if(A[i]>min){
            l=i;
            break;
        }
        for(int i=n-1;i>r;i--) if(A[i]<max){
            r=i;
            break;
        } 
        cout << l+1 << " " << r+1 << endl;
    }
    return 0;
}