#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int A[n];
        for(int i=0;i<n;i++) cin >> A[i];
        sort(A,A+n);
        int lannhan=0, lancong=0;
        while(A[n-1]>0){
            if(A[n-1]%2==0){
                lannhan++;
                A[n-1]/=2;
            }
            else{
                A[n-1]--;
                lancong ++;
            }
        }
        for(int i=0;i<n-1;i++){
            while(A[i]>0){
                if(A[i]%2!=0){
                    A[i]--;
                    lancong++;
                }
                else A[i]/=2;
            }
        }
        cout << (lannhan+lancong) << endl;
    }
    return 0;
}