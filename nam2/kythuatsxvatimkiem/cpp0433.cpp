#include<iostream>
#include<algorithm>
using namespace std;

void bbs(int *dd, int *A, int m){
    for(int i=0;i<m;i++){
        for(int j=m-1;j>i;j--)
        if(dd[A[j]]>dd[A[j-1]]) swap(A[j],A[j-1]);
    }
}

int main(){
    int t, n, tmp;
    cin>>t;
    while(t--){
        cin >> n;
        int *A=new int [n], *xh=new int [100001], m=0;
        fill(xh,xh+100001,0);
        for(int i=0;i<n;i++){
            cin >> tmp;
            if(xh[tmp]==0)
                A[m++]=tmp;
            xh[tmp]++;
        }
        sort(A,A+m);
        bbs(xh,A,m);
        for(int i=0;i<m;i++){
            while(xh[A[i]]>0){
                cout << A[i] << " ";
                xh[A[i]]--;
            }
        }
        cout << endl;
        delete[] xh;
        delete[] A;
    }
    return 0;
}