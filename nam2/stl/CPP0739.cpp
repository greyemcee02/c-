#include<bits/stdc++.h>

using namespace std;

string solve(string str){
    stack<string> st;
    int len = str.length();
    string kq;
    for(int i = 0; i <= len; i++){
        string s = "";
        if(i+1 == 10)
            s = "10";
        else
            s += (i+1+'0');
        st.push(s);
        if(str[i] == 'I' || i == len){
            while(!st.empty()){
                kq += (st.top());
                st.pop();
            }
        }
    }
    return kq;
}

int main(){
    int t;
    cin >> t;
    string str;
    while(t--){
        cin >> str;
        cout << solve(str) << endl;
    }
    return 0;
}
