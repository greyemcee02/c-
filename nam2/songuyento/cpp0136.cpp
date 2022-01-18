#include <iostream>
#include <cmath>
using namespace std;

int arr[1000001];

void create(){
    arr[1]=-1;
    for(int i=2;i<=sqrt(1000001);i++){
        if(arr[i]==0){
            for(int j=i*i;j<1000001;j+=i)
                if(arr[j]==0) arr[j]=-1;
        }
    }
}

void run(){
    create();
    int t;
    long long n;
    cin >> t;
    while(t--){
        cin >> n;
        int dem=0;
        for(int i=1;i<=sqrt(n);i++)
            if(arr[i]==0) dem++;
        cout << dem <<endl;
    }
}

int main(){
    run();
    return 0;
}