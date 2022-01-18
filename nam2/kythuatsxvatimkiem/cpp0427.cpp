#include<iostream>

using namespace std;

void input(int *a, int n){
    for(int i=0;i<n;i++) cin >> a[i];
}

void output(int *a, int n){
    for(int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
}

void solve(int *a,int n){
    int *b = new int[n],m=0;
    fill(b,b+n,0);
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            if(a[i]==a[i+1]){
                a[i]*=2;
                a[i+1]=0;
            }
            b[m++]=a[i];
        }
    }
    for(int i=0;i<n;i++) a[i]=b[i];
    delete[] b;
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int *a = new int[n];
        input(a, n);
        solve(a,n);
        output(a,n);
    }
}

int main(){
    run();
    return 0;
}