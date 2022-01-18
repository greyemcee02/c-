#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void solve(string s){
    int *gt = new int [11];
    fill(gt,gt+11,0);
    for(int i=0;i<s.length();i++){
        if(s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='7'){
            gt[s[i]-'0']++;
        }
        else if(s[i]=='4'){
            gt[2]+=2;
            gt[3]++;
        }
        else if(s[i]=='6'){
            gt[5]++;
            gt[3]++;
        }
        else if(s[i]=='8'){
            gt[7]++;
            gt[2]+=3;
        }
        else if(s[i]=='9'){
            gt[3]+=2;
            gt[2]++;
            gt[7]++;
        }
    }
    for(int i=9;i>1;i--){
        while(gt[i]>0){
            cout << i;
            gt[i]--;
        } 
    }
    cout << endl;
}

void run(){
    int t, n;
    string str;
    cin >> t;
    while(t--){
        cin >> n >> str;
        solve(str);
    } 
}

int main(){
    run();
    return 0;
}