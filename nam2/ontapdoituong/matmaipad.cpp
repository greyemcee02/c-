#include<bits/stdc++.h>

using namespace std;

bool cmp(string s1, string s2){
    int p1 = 0, p2 = -1, sz = s1.length();
    for(int i = 0; i < s2.length(); i++){
        if(isalpha(s2[i])){
            if(s2[i] - 'A' + '0' == s1[p1] || s2[i] - 'K' + '0' == s1[p1] ){
                if(p1 < sz) p1++;
                else{
                    p2 = i;
                    break;
                }  
            }
        }
    }
    while(p2 < s2.length()){
        if(!isdigit(s2[p2])) return false;
        p2++;
    }
    if(p1 == sz) return true;
    return false;
}

int main(){
    int t;
    string s1, s2;
    cin >> t;
    while(t--){
        cin >> s1 >> s2;
        if(cmp(s1,s2)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}