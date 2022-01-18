#include<iostream>
#include<string>
using namespace std;

int solve(string str){
    int n=str.length();
    for(size_t i= 0;i < n/2;i++)
        if( (str[i]-'0')%2!=0  || str[i]!=str[n-i-1]) 
        return 0;   
    return 1;
}

void run(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin,str);
        cout << (solve(str)?"YES":"NO") << endl;
    } 
}

int main(){
    run();
    return 0;
}