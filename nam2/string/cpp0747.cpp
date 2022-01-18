#include<iostream>

using namespace std;

int loai100(string s){
    int leng=s.length(), cplen=s.length(), tmp;
    while((tmp=s.find("100"))!= string :: npos){
        cplen-=3;
        s.erase(tmp,3);
    }
    return leng-cplen;
}

int main(){
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while(t--){
        cin >> s;
        if(loai100(s)>3)
        cout << loai100(s) << endl; 
    }
    return 0;
}