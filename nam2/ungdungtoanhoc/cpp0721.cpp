#include<iostream>

using namespace std;

void input(int *a, int n){
    for(int i=0;i<n;i++) cin >> a[i];
}

void solve(int *a,int n){
    int *dem = new int[n], max=1;
    fill(dem,dem+n,0);
    for(int i=0;i<n;i++){
        dem[i]=1;
        for(int j=0;j<i;j++){
            if(a[i]>a[j]) 
            dem[i]=(dem[i]<=dem[j])?dem[j]+1:dem[i];
        }
        max=(max<dem[i])?dem[i]:max;
    }
    cout << max << endl;
}

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int *a = new int[n];
        input(a, n);
        solve(a,n);
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}