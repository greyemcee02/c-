#include<iostream>
#include<string>
#include<sstream>
using namespace std;


int main(){
    int t;
    string str;
    cin >> t;
    while(t--){
        cin >> str;
        int sum=0;
        for(int i=0;i<str.length();){
            if(str[i]<='9'&&str[i]>='0'){
                int tmp=0;
                while(str[i]<='9'&&str[i]>='0'){
                    tmp=tmp*10+(str[i++]-'0');
                }
                sum+=tmp;
            }
            else i++;
        }
        cout << sum << endl;
    } 
    return 0;
}