#include<iostream>
#include<string>
#include<sstream>
using namespace std;


void run(){
    int t;
    string str;
    cin >> t;
    while(t--){
        cin >> str;
        int max=0;
        for(int i=0;i<str.length();){
            if(str[i]<='9'&&str[i]>='0'){
                int tmp=0;
                while(str[i]<='9'&&str[i]>='0'){
                    tmp=tmp*10+(str[i++]-'0');
                }
                max=(max<tmp)?tmp:max;
            }
            else i++;
        }
        cout << max << endl;
    } 
}

int main(){
    run();
    return 0;
}