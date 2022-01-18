#include<iostream>

using namespace std;

int main(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        long long sum=0;
        int A[n];
        for(int i=0;i<k;i++){
            cin >> A[i];
            sum+=A[i];
        }
        long long max=sum;
        int dd=k-1;
        for(int i=k;i<n;i++){
            cin >> A[i];
            sum=sum+A[i]-A[i-k];
            if(sum>max){
                dd=i;
                max=sum;
            }
        }
        for(int i=dd-k+1;i<=dd;i++) cout << A[i] << " ";
        cout << endl;
    }
    return 0;
}