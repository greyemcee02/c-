#include<iostream>

using namespace std;

void nhap(int *A, int n){
    for(int i=0;i<n;i++){
      cin >> A[i];
    } 
}

int timcapdau(int *A, int *A1, int n, int &vt){
    for(int i=n-1;i>0;i--){
        for(int j=0;j<n-1;j++){
            if(A1[i]>=A[j]){
                vt=j;
                return i;
            }
        }
    }
}

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin >> n;
        int *A=new int [n], *tmp= new int [n], hieu =0;
        nhap(A,n);
        int m=A[n-1];
        for(int i=n-1;i>=0;i--){
            m=(m<A[i])?A[i]:m;
            tmp[i]=m;
        }

        for(int i=0;i<n-1;i++){
            int left=i+1, right=n-1, vt=i;
            while(left<=right){
                int mid=(left+right)/2;
                if(A[i]<=tmp[mid]){
                    vt=(vt<mid)?mid:vt;
                    left=mid+1;
                }
                else right=mid-1;
            }
            hieu=(hieu<vt-i)?vt-i:hieu;
        }
        cout << hieu << endl;
    }
    return 0;
}