#include<iostream>
#include<string>
using namespace std;

int ckn(int k, int n){
    if(n<k) return 0;
    if(k==n||k==0) return 1;
    return ckn(k-1,n-1)+ckn(k,n-1); 
}

void run(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string  str;
        getline(cin,str);
        int *p=new int [300], dem=0;
        fill(p,p+300,0);
        for(size_t i = 0; i<=str.length();i++)
            p[str[i]]++;
        for(size_t i='a';i<='z';i++){
            dem+=ckn(2,p[i]) + p[i];
        } 
        cout << dem<< endl;
        delete[] p;
    } 
    
}

int main(){
    run();
    return 0;
}