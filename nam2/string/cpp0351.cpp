#include<iostream>
#include<sstream>
#include<string>
using namespace std;

void c2(string s){
    stringstream ss(s);
    string token=(""), tmp;
    int i=0;
    while(ss>>token){
        int len=token.length();
        token[0]=toupper(token[0]);
        for(int j=1;j<len;j++) token[j]=tolower(token[j]);
        if(i==0){
            i++;
            tmp=token;
        }
        else cout << token << " ";
    }
    cout << tmp << endl;
}

void c1(string s){
    stringstream ss(s);
    string token=(""), tmp, kq;
    while(ss>>token){
        int len=token.length();
        token[0]=toupper(token[0]);
        for(int j=1;j<len;j++) 
        token[j]=tolower(token[j]);
        kq+=token + " ";
        tmp=token;
    }
    kq.erase(kq.length()-tmp.length()-2);
    kq=tmp+" "+ kq;
    cout << kq << endl;
}

void run(){
    int t;
    string s;
    int c;
    cin >> t;
    while(t--){
        cin >> c;
        cin.ignore();
        getline(cin,s);
        if(c==1) c1(s);
        else c2(s);
    }
}

int main(){
    run();
    return 0;
}