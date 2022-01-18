#include<iostream>

using namespace std;

void input(int *a, int n){
    for(int i=0;i<n;i++) cin >> a[i];
}

long long solve(int A[], int B[], int n1, int n2){
    long long sum=0, as=0;
    for(int i=0;i<n1;i++){
        as+=A[i];
        long long bs=0;
        for(int j= i+1;j<n2;j++)
        bs+=B[j];
        sum=(as+bs>sum)?as+bs:sum;
    }
    return sum;
}

void run(){
    int t, n1, n2;
    cin >> t;
    while(t--){
        cin >> n1 >> n2;
        int *arr1 = new int[n1], *arr2= new int [n2];
        input(arr1,n1);
        input(arr2,n2);
        long long s1=solve(arr1,arr2,n1,n2), s2=solve(arr2,arr1,n2,n1);
        cout << ((s1<s2)?s2:s1) << endl;
        delete[] arr1;
        delete[] arr2;
    }
}

int main(){
    run();
    return 0;
}