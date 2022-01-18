#include<iostream>
#include<string>
using namespace std;


int kq(string s, int k){
    int dem=0, len =s.length();
    for(int i=0;i<len;i++){
        int alpha[200]={}, khacnhau=1;
        for(int j=i;j>=0;j--){
            if(alpha[s[j]]==0&&s[i]!=s[j]) khacnhau++;
            alpha[s[j]]++;
            if(khacnhau==k) dem++;
            else if(khacnhau>k) break;
        }  
    }
    return dem;
}

int main(){
    int t,k;
    string s;
    cin >> t;
   // cin.ignore();
    while(t--){
       cin >> s >> k;
        cout << kq(s,k) << endl;
    }
    return 0;
}