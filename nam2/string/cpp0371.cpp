#include<iostream>
#include<string>
using namespace std;

void loai_n_am(string str){
    string N_AM =("aeiouy");
    for(int i=0;i<str.length();i++){
        str[i]=tolower(str[i]);
        if(N_AM.find(str[i])!=string::npos){
            str.erase(str.begin()+i);
            i--;
        }
    }
    for(int i=0;i<str.length();i++) cout <<"."<< str[i];
    cout << endl;
}

void run(){
    // int t;
    // cin >> t;
    // cin.ignore();
    // while(t--){
        string str;
        getline(cin,str);
        loai_n_am(str);
   // } 
}

int main(){
    run();
    return 0;
}