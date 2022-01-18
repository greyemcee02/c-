#include<iostream>
#include<string>

using namespace std;
int *cd=new int[200];

void create(){
    for(int i='A';i<='C';i++) cd[i]=2;
    for(int i='D';i<='F';i++) cd[i]=3;
    for(int i='G';i<='I';i++) cd[i]=4;
    for(int i='J';i<='L';i++) cd[i]=5;
    for(int i='M';i<='O';i++) cd[i]=6;
    for(int i='P';i<='S';i++) cd[i]=7;
    for(int i='T';i<='V';i++) cd[i]=8;
    for(int i='W';i<='Z';i++) cd[i]=9; 
}

int kt(string str){
    int len=str.length();
    for(int i=0;i<len/2;i++)
        if(cd[toupper(str[i])]!=cd[toupper(str[len-1-i])])
        return 0;
    return 1;
}

void run(){
    int t;
    string str;
    create();
    cin >> t;
    while(t--){
        cin >> str;
        cout << (kt(str)?"YES":"NO") << endl;
    } 
    delete[] cd;
}

int main(){
    run();
    return 0;
}