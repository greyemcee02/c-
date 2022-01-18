#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int *DD = new int [100005],*A=new int [n], *B = new int [m];
        fill(DD,DD+100005,0);
        for(int i=0;i<n;i++){
            cin >> A[i];
            DD[A[i]]++;
        }
        for(int i=0;i<m;i++) cin >> B[i];
        for(int i=0;i<m;i++){
            while(DD[B[i]]>0){
                cout << B[i] << " ";
                DD[B[i]]--;
            }
        }
        sort(A,A+n);
        for(int i=0;i<n;i++){
            while(DD[A[i]]>0){
                cout << A[i] << " ";
                DD[A[i]]--;
            }
        }
        cout << endl;
    }
    return 0;
}