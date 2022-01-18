#include<iostream>
#include<string>
using namespace std;

void run(){
    int t;
    cin >> t;
    while(t--){
        string  str;
        char s='a';
        int dem=0, k;
        cin.ignore();
        getline(cin,str);
        cin >> k;
        
        while(s<='z'){
            if(str.find_first_of(s)!=string::npos){
                dem++;
            }
            s++;
        }
        if(26-dem<=k) cout << 1;
        else cout << 0;
        cout <<  endl;
    } 
    
}

int main(){
    run();
    return 0;
}