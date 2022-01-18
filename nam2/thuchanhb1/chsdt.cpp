#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    string str;
    vector<string> vt;
    for(int i =0 ; i < t; i++){
        getline(cin, str);
        string tmp = "";
        for(int j = 0; j < str.length(); j++){
            if(isdigit(str[j])) tmp+=str[j];
        }
        if(tmp[0] == '8' && tmp[1] =='4'){
            tmp.erase(0, 2);
            tmp = '0' + tmp;
        } 
        vt.push_back(tmp);
    }
    for(auto it : vt)
        cout << it << endl;
    return 0;
}
