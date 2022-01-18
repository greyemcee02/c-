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

long long solve(long long a){
    long long umax;
    for(int i=1;i<=sqrt(a);i++){
        if(a%i==0){
            if(ktnt(a/i)) return a/i;
            if(ktnt(i)) umax=i;
        }
    } 
    return umax;
}

void run(){
    int t;
    long long n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << solve(n) << endl;
    }
}

int main(){
    run();
    return 0;
}