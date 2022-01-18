#include<iostream>
#include<string>
using namespace std;

void sum(string s1, string s2){
    string s;
    s1="00"+s1;
    s2="00"+s2;
    while(s1.length()<s2.length()) s1="0"+s1;
    while(s2.length()<s1.length()) s2="0"+s2;
    int nho=0, len=s1.length();
    for(int i=len-1;i>=0;i--){
        int tmp=(s1[i]-'0')+(s2[i]-'0')+nho;
        s= (char)(tmp%10+'0' ) + s;
        nho=tmp/10;
    }
    while(s[0]=='0') s.erase(s.begin()+0);
    cout << s << endl;
}

int main(){
    int t;
    string s1, s2;
    cin >> t;
    while(t--){
        cin >> s1 >> s2;
        sum(s1,s2);
    }
    return 0;
}