#include<iostream>

using namespace std;

int capnhat(int A[], int l, int r){
    int max=l;
    for(int i=l+1;i<=r;i++) if(A[max]<A[i]) max=i;
    return max;
}

int main(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int max, *A=new int [n], *B=new int [n], m=0, tmp;
        cin >> A[0];
        max=0;
        for(int i=1;i<k;i++){
            cin>>A[i];
            max=(A[max]<=A[i])?i:max;
        }
        B[m++]=A[max];
        int l=0;
        for(int i=k;i<n;i++){
            cin >>A[i];
            l++;
            if(max<l)
                max=capnhat(A,l,i);
            else if(A[i]>A[max]) max=i;
            B[m++]=A[max];
        }
        for(int i=0;i<m;i++) cout << B[i] << " ";
        cout << endl;
        delete[] A;
    }
    return 0;
}