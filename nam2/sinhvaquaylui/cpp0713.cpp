#include<iostream>

using namespace std;

int A[21], n;
int DD[21]={0};

void xuat(){
    for(int i=1;i<=n;i++) cout << A[i];
    cout << " ";
}

void TRY(int k){
    for(int i=1;i<=n;i++){
        if(!DD[i]){
            A[k]=i;
            DD[i]=1;
            if(k==n) xuat();
            else TRY(k+1);
            DD[i]=0;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        TRY(1);
        cout << endl;
    }
    return 0;
}