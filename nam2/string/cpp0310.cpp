#include<iostream>
#include<string>
using namespace std;

void bdMAX(string &s1, string &s2){
    for(int i=0;i<s1.length();i++) 
        if(s1[i]=='5') s1[i]='6';
    for(int i=0;i<s2.length();i++) 
        if(s2[i]=='5') s2[i]='6';
}

void bdMIN(string &s1, string &s2){
    for(int i=0;i<s1.length();i++) 
        if(s1[i]=='6') s1[i]='5';
    for(int i=0;i<s2.length();i++) 
        if(s2[i]=='6') s2[i]='5';
}

void dao(string &s){
    int len=s.length();
    for(int i=0;i<len/2;i++){
        char tmp=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=tmp;
    } 
}

void sum(string s1, string s2){
    string tmp1=s1, tmp2=s2, s=("");
    dao(tmp1); dao(tmp2);
    tmp1+="00";tmp2+="00";
    int len1=tmp1.length(), len2=tmp2.length();
    for(int i=len2;i<=len1;i++)
        tmp2+='0';
    int nho=0;
    for(int i=0;i<len1;i++){
        int tt=((tmp1[i]-'0')+(tmp2[i]-'0')+nho);
        s+=(tt%10+'0');
        nho=tt/10;
    }
    len1--;
    while(s[len1]=='0')
    s.erase(len1--);
    dao(s);
    cout << s;
}

void kq(string s1, string s2){
    bdMIN(s1,s2);
    sum(s1,s2);
    cout << " ";
    bdMAX(s1,s2);
    sum(s1,s2);
    cout << endl;
}

 
void run(){
    int t;
    cin >> t;
    //cin.ignore();
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        int len1=s1.length(), len2=s2.length();
        if(len1<=len2) kq(s2,s1);
        else kq(s1,s2);
    }
}

int main(){
    run();
    return 0;
}