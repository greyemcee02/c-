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
		for(int i=0;i<token.length();i++) token[i]=tolower(token[i]);
        str[m++]=token;
	}
    cout << str[m-1];
    for(int i=0;i<=m-2;i++) cout<<str[i][0];
    cout << "@ptit.edu.vn";
}

int main(){
    run();
    return 0;
}