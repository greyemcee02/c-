#include<iostream>
#include<iomanip>
#include<sstream>
using namespace std;

struct human{
    string Name;
    int ds,ts,ns;
};

void nhap(struct human &hm){
    string tmp, token;
    getline(cin,tmp);
    stringstream ss(tmp);
    ss >> token;
    hm.Name=token;
    ss >> token;
    hm.ns=(token[0]-'0')*10+(token[1]-'0');
    hm.ts=(token[3]-'0')*10+(token[4]-'0');
    hm.ns=0;
    for(int i=6;i<=9;i++) hm.ns=hm.ns*10+(token[i]-'0');
}

void SWAP(struct human &h1, struct human &h2){
    struct human s=h1;
    h1=h2;
    h2=s;
}

int ss(struct human s1, struct human s2){
    if(s1.ns>s2.ns) return 0;
    if(s1.ns<s2.ns) return 1;
    if(s1.ts>s2.ts) return 0;
    if(s1.ts<s2.ts) return 1;
    if(s1.ds<s2.ds) return 1;
    return 0;
}
void sort(struct human hm[], int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(ss(hm[j],hm[j-1]))
                SWAP(hm[j],hm[j-1]);
        }
    }
}

void in(struct human hm[],int n){
    cout << hm[n-1].Name << "\n" << hm[0].Name ; 
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    struct human hm[n];
    for(int i=0;i<n;i++) nhap(hm[i]);
    sort(hm,n);
    in(hm,n);
    return 0;
}