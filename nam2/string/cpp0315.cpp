#include<iostream>
#include<string>
using namespace std;

int ktt(string str){
    for(int i=str.length()-1;i>0;i--){
        if(str[i]<str[i-1]) return i-1;
    }
    return -1;
}

void kq(string str){
    int k=ktt(str);
    if(k==-1) cout << -1 << endl;
   // else if(str[0]=='0') cout << 0 << endl;
    else{
        for(int i=str.length()-1;i>k;i--){
            if(str[i]==str[i-1]) i--;
            if(str[i]<str[k]){
                char tmp=str[i];
                str[i]=str[k];
                str[k]=tmp;
                break;
            }
        }
        cout << str << endl;
    }

}

void run(){
    int t;
    string str;
    cin >> t;
    while(t--){
        cin >> str;
        kq(str);
    } 
}

int main(){
    run();
    return 0;
}