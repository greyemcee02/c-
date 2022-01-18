#include<iostream>

using namespace std;

int kt(int a){
    int c=0, l=0;
    while(a>0){
        if((a%10)%2==0) c++;
        else l++;
        a/=10;
    }
    return (c==l);
}

void kq(int n){
    int l=1, dem=0, r;
    for(int i=1;i<n;i++)
        l*=10;
    r=l*10-1;
    for(int i=l;i<=r;i++)
        if(kt(i)){
            dem++;
            cout << i << " ";
            if(dem==10){
                dem=0;
                cout << endl;
            }
        }
    
}

void run(){
    int n;
    cin >> n;
    kq(n);
}

int main(){
    run();
    return 0;
}