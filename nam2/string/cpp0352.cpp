#include<iostream>
#include<sstream>
#include<string>
using namespace std;

void solve(string str[], int n){
    for(int i=n-1;i>0;i--){
        int d=0;
        for(int j=i-1;j>=0;j--){
            if(str[j]==str[i]) d++;
        }
        if(d!=0){
            d++;
            string t;
            while(d>0){
                t=(char)(d%10 +'0')+t;
                d/=10;
            }
            str[i]+=t;
        }
    }
}

void run(){
    int n;
    cin >> n;
    cin.ignore();
    string str[n], s;
    for(int i=0;i<n;i++){  
        getline(cin,s);
        string token=(""), tmp;
        stringstream ss(s);
        while(ss>>token){
            for(int i=0;i<token.length();i++) 
            token[i]=tolower(token[i]);
            tmp+=token[0];
        }
        tmp.erase(tmp.begin()+tmp.length()-1);
        str[i]=token+tmp;
    }
    solve(str,n);
    for(int i=0;i<n;i++){
        str[i]+="@ptit.edu.vn";
        cout << str[i] << endl;
    } 
    
}

int main(){
    run();
    return 0;
}