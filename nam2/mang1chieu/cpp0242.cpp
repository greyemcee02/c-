#include<iostream>

using namespace std;

int kq(int A[1010][1010], int B[1010][1010], int n){
    int len=0;
    for(int i=0;i<n;i++){
        int tmp1=A[0][i];
        int tmp2=B[0][i];
        if(tmp1==tmp2 && tmp1==1) len=(len<1)?1:len;
        for(int j=1;j<=i;j++){
            A[j][i]=A[0][i]+A[j-1][i-1];
            B[j][i]=B[0][i]+B[j-1][i-1];
            if(A[j][i]>0 && A[j][i]==B[j][i]) len=(len<j+1)?j+1:len;
        }
    }
    return len;
}

int main(){
    int t , n;
    cin >> t;
    while(t--){
        cin >> n;
        int A[1010][1010], B[1010][1010];
        for(int i=0;i<n;i++) cin >> A[0][i];
        for(int i=0;i<n;i++) cin >> B[0][i];
        cout << kq(A,B,n) << endl;
    }
    return 0;
}