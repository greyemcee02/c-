#include<iostream>

using namespace std;

long long ketqua(int *A, int N, int K){
    long long min=0, dem;
    for(int i=0;i<K;i++){
        if(A[i]==0) min++;
    }
    if(min==0) return 0;
    int l=0, r=K;
    dem=min;
    while(r<N){
        if(A[l]==0) dem--;
        if(A[r]==0) dem++;
        min=(min<dem)?min:dem;
        l++;r++;
    }
    return min;
}

int main(){
    int N, K, B;
    cin >> N >> K >> B;
    int *A = new int [N];
    long long tmp;
    fill(A,A+N,1);
    for(int i=1;i<=B;i++){
        cin >> tmp;
        A[tmp-1]=0;
    }
    if(K==1&&B<N) cout << 0;
    else if(K==1&&B==N) cout << 1;
    else
    cout << ketqua(A,N,K);
    delete[] A;
    return 0;
}