#include<iostream>

using namespace std;

int kt(string s){
    int len=s.length();
    if(s[len-1]=='.'||s[len-1]=='!' || s[len-1]=='?') return 1;
    return 0;
}

void chuanhoa(string &s){
    int len=s.length();
    for(int i=0;i<len;i++) s[i]=tolower(s[i]);
}

int main(){
    string vb[10000], s;
    int n=0;
    while(cin >> s){
        chuanhoa(s);
        //if(s==","||)
        vb[n]+=s+' ';
        if(kt(s)==1){
            vb[n].erase(vb[n].length()-2);
            n++;
        }
    }
    for(int i=0;i<n;i++){
        vb[i][0]=toupper(vb[i][0]);
        cout << vb[i] << endl;
    }
        
    return 0;
}