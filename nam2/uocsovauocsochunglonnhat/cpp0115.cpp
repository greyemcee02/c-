#include<iostream>
#include<math.h>

using namespace std;

int ktnt(int n){
    if(n==2) return 1;
    if(n<2||n%2==0) return 0;
    for(int i=3;i<=sqrt(n);i+=2)
    if(n%i==0) return 0;
    return 1;
}

void solve(int a){
    int nt[100], somu[100]={}, n=0;
    if(ktnt(a)) cout << a << " " << 1;
    else{
        if(a%2==0){
            nt[n]=2;
            while(a%2==0){
                somu[n]++;
                a/=2;
            }
            n++;
        }
        for(int i=3;i<=sqrt(a);i+=2){
            if(a%i==0 && ktnt(i)){
                nt[n]=i;
                while(a%i==0){
                    somu[n]++;
                    a/=i;
                }
                n++;
            }
        }
        if(a>1){
            nt[n++]=a;
            somu[n-1]=1;
        }
        for(int i=0;i<n;i++) 
        cout << nt[i] << " " << somu[i] << " ";
    }
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        solve(n);
        cout << endl;
    }
}

int main(){
    run();
    return 0;
}