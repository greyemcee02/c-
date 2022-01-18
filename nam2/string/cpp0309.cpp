#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void run(){
    int t;
    cin >> t;
    while(t--){
        string  str;
        string token = " \n";
        cin.ignore();
        getline(cin,str);
        stringstream ss(str);
        int dem=0;
        while(ss>>token){
            dem++;
        }
        cout <<  dem << endl;
    } 
    
}

int main(){
    run();
    return 0;
}