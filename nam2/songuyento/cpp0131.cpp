#include<iostream>
#include<cmath>
using namespace std;

int ktnt(int n){
    if(n==2) return 1;
    if(n<2||n%2==0) return 0;
    for(int i=3;i<=sqrt(n);i+=2) if(n%i==0) return 0;
    return 1;
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << 1 << " ";
        for(int i=2;i<=n;i++){
            for(int j=2;j<=i;j++)
                if(i%j==0 && ktnt(j)){
                    cout << j << " ";
                    break;
                } 
        }
        cout << endl;
    }
}

int main(){
    run();
    return 0;
}