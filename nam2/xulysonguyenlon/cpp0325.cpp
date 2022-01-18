#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int kt(string s){
    long long sumc=0, suml=0;
    for(int i=0;i<s.length();i++){
        if(i%2==0) sumc+=s[i]-'0';
        else suml+=s[i]-'0';
    }
    long long h=abs(sumc-suml);
    if( h % 11==0) return 1;
    return 0;
}

void run(){
    int t;
    string str;
    cin >> t;
    while(t--){
        cin >> str;
        cout << kt(str)<< endl;
    } 
}

int main(){
    run();
    return 0;
}