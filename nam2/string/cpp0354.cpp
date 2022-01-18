#include<iostream>
#include<string>
using namespace std;

void mahoa(string str){
    int len = str.length(), i=0;
    while(i<len){
        if(str[i]!=str[i+1]){
            cout << str[i] << 1;
        }
        else{
            int d=1;
            while(str[i]==str[i+1]){
                d++;i++;
            }
            cout << str[i]<<d;
        }
        i++;
    }
    cout << endl;
}
void run(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin,str);
        mahoa(str);
    } 
}

int main(){
    run();
    return 0;
}