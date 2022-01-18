#include<iostream>
#include<math.h>

using namespace std;

int ktnt(long long a){
    if(a==2) return 1;
    if(a<2||a%2==0) return 0;
    for(int i=3;i<=sqrt(a);i+=2)
    if(a%i==0) return 0;
    return 1; 
}

void solve(long long a){
    if(ktnt(a)) cout << a ;
    else{
        while(a%2==0){
            cout << "2";
            a/=2;
            if(a>1) cout << " ";
        } 
        for(int i=3;i<=sqrt(a);i+=2){
            if(a%i==0 && ktnt(i)){
                while(a%i==0){
                    cout << i;
                    a/=i;
                    if(a>1) cout << " ";
                }
            }
        }
        if(a>1) cout << a;
    }
        
}

void run(){
    int t;
    long long n;
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
