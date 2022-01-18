#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int kt(string s){
    int len=s.length(), kq=0;
    for(int i=0;i<len/2;i++){
        char tmp=s[i];
        s[i]=s[len-i-1];
        s[len-i-1]=tmp;
    }
    int i=0;
    while(i<len){
        int x=0;
        if(i<len){
            if(s[i]=='1') x+=1;
            i++;
        }
        if(i<len){
            if(s[i]=='1') x+=2;
            i++;
        }
        if(i<len){
            if(s[i]=='1') x+=4;
            i++;
        }
        if(i<len){
            if(s[i]=='1') x+=3;
            i++;
        }
        kq+=x%5;
    }
    if(kq%5==0) return 1;
    return 0;
}

void run(){
    int t;
    string str;
    cin >> t;
    while(t--){
        cin >> str;
        cout << (kt(str)?"Yes":"No")<< endl;
    } 
}

int main(){
    run();
    return 0;
}