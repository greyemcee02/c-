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
        int m=0;
        getline(cin,s);
        string token=(""), kq[1000];
        stringstream ss(s);
        while(ss>>token){
            kq[m++]=token;
        }
        for(int i=m-1;i>=0;i--){
            cout << kq[i];
            if(i>0) cout <<" ";
        }
        cout << endl;
    } 
}

int main(){
    run();
    return 0;
}