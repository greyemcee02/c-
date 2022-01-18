#include<iostream>
#include<cmath>
using namespace std;

int kq(int N, int P){
    int dem=0;
    for(int i=2;i<=N;i++){
        int tmp=i;
        while(tmp%P==0){
            dem++;
            tmp/=P;
        }
    }
    return dem;
}

void run(){
    int n,t, p;
    cin >> t;
    while(t--){
        cin >> n >> p;
        cout << kq(n,p) << endl;
    }
}

int main(){
    run();
    return 0;
}