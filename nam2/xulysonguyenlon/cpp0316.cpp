#include<iostream>
#include<sstream>
#include<string>
using namespace std;


int kt(string s){
    long long sum=0;
    string str=("");
    for(int i=0;i<s.length();i++) sum+=(s[i]-'0');
    if(sum==9) return 1;
    if(sum < 9) return 0;
    str=("");
    while(sum>0){
        str+=(char)(sum%10)+'0';
        sum/=10;
    }
    int len=str.length();
    for(int i=0;i<len/2;i++){
        char tmp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]= tmp;
    } 
    return kt(str);
}

void run(){
    int t;
    string s;
    cin >> t;
    while(t--){
        cin.ignore();
        cin >> s;
        cout << kt(s) << endl;
    }
}

int main(){
    run();
    return 0;
}