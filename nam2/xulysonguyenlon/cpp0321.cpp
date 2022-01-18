#include<iostream>
#include<string>
using namespace std;

void swap(string &s1, string &s2){
    string s=s1;
    s1=s2;
    s2=s;
}

void hieu(string s1, string s2){
    while(s1.length()<s2.length()) s1="0"+s1;
    while(s2.length()<s1.length()) s2="0"+s2;
    if(s1<s2) swap(s1,s2);
    string s;
    int len=s1.length(), nho=0;
    for(int i=len-1;i>=0;i--){
        int tmp= (int)(s1[i]-'0')-(int)(s2[i]-'0')-nho;
        if(tmp>=0){
            s= (char)(tmp+'0')+s;
            nho =0;
        } 
        else{
            s=(char) (tmp+'0'+10)+s;
            nho=1;
        }
    }
    cout << s << endl;
}

int main(){
    int t;
    string s1, s2;
    cin >> t;
    //cin.ignore();
    while(t--){
        cin >> s1 >> s2;
        hieu(s1,s2);
    }
    return 0;
}