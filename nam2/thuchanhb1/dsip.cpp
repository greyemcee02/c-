#include<bits/stdc++.h>

using namespace std;

float dt[41] = {};



int main(){
    int t, dd;
    cin >> t;
    string str;
    while(t--){
        cin >> str;
        str+='.';
        string tmp;
        dd = 1;
        int cnt = 0;
        for(int i = 0; i < str.length(); i++){
            if(isdigit(str[i])){
                tmp += str[i];
            }
            else if(str[i] == '.'){
                cnt++;
                if(tmp.length() > 3 || cnt >4){
                    dd=-1;
                    break;
                }
                else{
                    istringstream ss(tmp);
                    int x;
                    ss >> x;
                    if(x > 255){
                        dd = -1;
                        break;
                    }
                }
                tmp ="";
            }
            else{
                dd = -1;
                break;
            }
        }
        if(cnt != 4 || dd==-1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
