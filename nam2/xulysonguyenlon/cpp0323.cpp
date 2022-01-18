#include<iostream>

using namespace std;

int main(){
    int t;
    long long b;
    cin >> t;
    string s;
    while(t--){
        cin >> s >> b;
        long long du=0;
        for(int i=0;i<s.length();i++){
            du=(du*10+(s[i]-'0')%b)%b;
        }
        cout << du <<endl;
    }
    return 0;
}