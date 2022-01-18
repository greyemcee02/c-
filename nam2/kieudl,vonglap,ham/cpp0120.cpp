#include<iostream>

using namespace std;

int kt(int M, int N, int A, int B){
    int dem=0;
    //if((A<M && B<M)||(A<M&&B>N)||(A>N&&B<M)||(A>N&&B>N)) return 0;
    for(int i=M;i<=N;i++) if(i%A==0 || i%B==0) dem++;
    return dem;
}

void run(){
    int t, M, N, A, B;
    cin >> t;
    while(t--){
        cin >> M >> N >> A >> B;
        cout << kt(M,N,A,B) << endl;
    }
}

int main(){
    run();
    return 0;
}