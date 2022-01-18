#include<iostream>

using namespace std;

int arr[10001];

void sangnt(){
    for(int i=0;i<10001;i++) arr[i]=1;
    arr[0]=0;
    arr[1]=0;
    for(int i=2;i<=102;i++){
        if(arr[i]){
            for(int j=i*i; j < 10001; j+=i)
                arr[j]=0;
        }
    }
}

void run(){
    sangnt();
    int t, m, n;
    cin >> t;
    while(t--){
        cin >> m >> n;
        for(int i=m;i<=n;i++)
            if(arr[i]) cout << i << " ";
        cout << endl;
    }
}

int main(){
    run();
    return 0;
}