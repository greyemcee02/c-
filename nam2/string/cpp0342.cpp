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
        int sum=0, *alpha = new int[200];
        fill(alpha,alpha+200,0);
        for(int i=0;i<str.length();i++){
            if(str[i]<='9'&&str[i]>='0'){
                sum +=str[i]-'0';
            }
            else alpha[str[i]]++;
        }
        for(int i='A';i<='Z';i++) if(alpha[i]>0){
            while(alpha[i]>0){
                cout << (char)i;
                alpha[i]--; 
            }
        } 
        cout << sum << endl;
        delete[] alpha;
    } 
}

int main(){
    run();
    return 0;
}