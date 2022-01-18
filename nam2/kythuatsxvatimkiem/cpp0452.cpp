#include<iostream>
#include<algorithm>
using namespace std;

void nhap(unsigned long long *A, int n){
    for(int i=0;i<n;i++) cin >> A[i];
}

void kq(unsigned long long *A1,unsigned long long *A2,unsigned long long *A3, int n1, int n2, int n3){
    int i=0, j=0, k=0, len=0;
    unsigned long long * KQ = new unsigned long long[1000050];
    while(i<n1 && j<n2 && k<n3){
        if(A1[i]==A2[j] && A2[j]==A3[k]){
            KQ[len++]=A1[i];
            i++;j++;k++;
        }
        else if(A1[i]<A2[j]) i++;
        else if(A2[j]<A3[k]) j++;
        else k++;
    }
    if(len==0) cout << -1 << endl;
    else{
        for(int i=0;i<len;i++) cout << KQ[i] << " ";
        cout << endl;
    }
    delete[] KQ;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        unsigned long long *A1= new unsigned long long [n1],
        *A2 = new unsigned long long [n2],
        *A3= new unsigned long long [n3];
        nhap(A1,n1);
        nhap(A2,n2);
        nhap(A3,n3);
        //sort(A1,A1+n1);
        //sort(A2,A2+n2);
        //sort(A3,A3+n3);
        kq(A1,A2,A3,n1,n2,n3);
        delete[] A1;
        delete[] A2;
        delete[] A3;
    }
    return 0;
}