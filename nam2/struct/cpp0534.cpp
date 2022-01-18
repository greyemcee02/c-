#include<iostream>

using namespace std;

struct thuannghich{
    string tn;
    int xh;
};

int kttn(string s){
    int len=s.length();
    if(len==1) return 0;
    for(int i=0;i<len/2;i++)
    if(s[i]!=s[len-1-i]) return 0;
    return 1;
}

int xh(struct thuannghich stn[], int n, string s){
    for(int i=0;i<n;i++) if(s==stn[i].tn) return i;
    return -1;
}

int ss(string s1, string s2){
    if(s1.length()>s2.length()) return 1;
    if(s1.length()<s2.length()) return 0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]-'0'>s2[i]-'0') return 1;
        if(s1[i]-'0'<s2[i]-'0') return 0;
    }
}

void SWAP(struct thuannghich &s1, struct thuannghich &s2){
    struct thuannghich tm=s1;
    s1=s2;
    s2=tm;
}

void sx(struct thuannghich stn[], int n){
    for(int i=0;i<n;i++)
        for(int j=n-1;j>i;j--)
            if(ss(stn[j].tn,stn[j-1].tn)) 
            SWAP(stn[j],stn[j-1]);
}

int main(){
    struct thuannghich stn[1001];
    int n=0;
    string s;
    while(cin >> s){
        if(kttn(s)){
            int tmp=xh(stn,n,s);
            if(tmp==-1){
                stn[n].tn=s;
                stn[n++].xh=1;
            }
            else stn[tmp].xh=stn[tmp].xh+1;
        }
    }
    sx(stn,n);
    for(int i=0;i<n;i++){
        cout << stn[i].tn << " " << stn[i].xh << endl;
    }
        
    return 0;
}