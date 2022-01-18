#include<iostream>
#include<sstream>
#include<string>
using namespace std;

void run(){
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while(t--){
        int c=0, l=0;
        getline(cin,s);
        string token=("");
        stringstream ss(s);
        while(ss>>token){
            //cout << token << endl;
            if((token[token.length()-1]-'0')%2==0) c++;
            else l++;
        }
        if(c>l && (c+l)%2==0) cout << "YES" << endl;
        else if(c<l && (c+l)%2!=0) cout << "YES" << endl;
        else cout << "NO" << endl;

    } 
}

int main(){
    run();
    return 0;
}