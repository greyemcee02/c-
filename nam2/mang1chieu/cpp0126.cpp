#include<iostream>

using namespace std;

int kt(int *a, int l, int r){
    while(a[l]<=a[l+1]) l++;
    for(int i=l;i<r;i++) 
    if(a[i]<a[i+1]) return 0;
    return 1;
}

void run(){
    int t, n, l, r;
    cin >> t;
    while(t--){
        cin >> n;
        int *a = new int[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        cin >> l >> r;
        if(kt(a,l,r)) cout << "Yes" << endl;
        else
        cout << "No" << endl;
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}