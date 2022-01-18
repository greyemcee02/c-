#include<iostream>
#include<string>

using namespace std;

int kt32(string str){
    if(str[0]!=str[1]) return 0;
    if(str[1]!=str[2]) return 0;
    if(str[3]!=str[4]) return 0;
    return 1; 
}

int kt68(string str){
    for(int i=0;i<5;i++) 
        if(str[i]!='6' && str[i]!='8') return 0;
    return 1;
}

int ktt(string str){
    for(int i=0;i<4;i++){
        if(str[i]>=str[i+1]) return 0; 
    } 
    return 1;
}

int kt(string str){
    string s;
    s=str.substr(0,2);    
    if(s!="29"&&s!="30"&&s!="31") return 0;
    if(str[4]!='-') return 0;
    if(str[2]<'A'||str[3]>'Z') return 0;
    if(str[3]<'0'||str[4]>'9') return 0;
    if(str[8]!='.') return 0;
    str.erase(str.begin()+8);
    s=str.substr(5,9);
    if(kt32(s)) return 1;
    if(kt68(s)) return 1;
    if(ktt(s)) return 1;
    return 0;
}

void run(){
    int t;
    string str;
    cin >> t;
    while(t--){
        cin >> str;
        cout << (kt(str)?"YES":"NO") << endl;
    } 
}

int main(){
    run();
    return 0;
}