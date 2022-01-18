#include<iostream>
#include<sstream>
#include<string>
using namespace std;

void run(){
    string s;
    int m=0;
    getline(cin,s);
    string token=(""), str[1000];
    stringstream ss(s);
	while(ss>>token){
        token[0]=toupper(token[0]);
		for(int i=1;i<token.length();i++) 
            token[i]=tolower(token[i]);
        str[m++]=token;
	}
    for(int i=0;i<token.length();i++) 
        token[i]=toupper(token[i]);
    str[m-1]=token;
    for(int i=0;i<m;i++){
        cout << str[i];
        if(i==m-2) cout << ", ";
        else if(i<m-2) cout << " ";
    } 
}

int main(){
    run();
    return 0;
}