#include <iostream>

using namespace std;
int A[21], n, k;
void output(){
    for(int i=1;i<=k;i++) cout << A[i];
    cout << " ";
}

void TRY(int x){
    for(int i=A[x-1]+1;i<=n-k+x;i++){
        A[x]=i;
        if(x==k) output();
        else TRY(x+1);
    }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        A[0]=0;
        TRY(1);
        cout << endl;
    }
    return 0;
}