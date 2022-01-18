#include<iostream>
#include<cmath>
using namespace std;

int ktnt(int n){
    if(n==2) return 1;
    if(n<2||n%2==0) return 0;
    for(int i=3;i<=sqrt(n);i+=2) 
        if(n%i==0) return 0;
    return 1;
}



void run(){
    int  n;
    cin >> n;
    if(ktnt(n)) cout << "YES";
    else cout << "NO";
    
}

int main(){
    run();
    return 0;
}