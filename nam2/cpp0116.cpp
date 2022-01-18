#include <iostream>
#include <cmath>
using namespace std;

int arr[10001];

void create(){
    arr[1]=1;
    for(int i=2;i<=sqrt(10001);i++){
        if(arr[i]==0){
            arr[i]=i;
            for(int j=i*i;j<10001;j+=i)
                if(arr[j]==0) arr[j]=i;
        }
    }
}

void run(){
    create();
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++){
            if(arr[i]==0) cout << i << " ";
            else cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    run();
    return 0;
}