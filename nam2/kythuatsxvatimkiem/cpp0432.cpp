#include<iostream>
#include<sstream>
#include<string>
using namespace std;

void swap(string &s1, string &s2){
    string tmp=s1;
    s1=s2;
    s2=tmp;
}

int ss(string str1, string str2){
    string s1=str1+str2, s2=str2+str1;
    return (s1.compare(s2)>0)?1:0;
}

void sort(string str[], int left, int right){  
    int l=left, r=right;
    string pivot =str[(l+r)/2];
    while(l<=r){
        while(ss(str[l],pivot)) l++;
        while(ss(pivot,str[r])) r--;
        if(l<=r){
            swap(str[l],str[r]);
            l++;
            r--;
        }
    } 
    if(l<right) sort(str,l,right);
    if(r>left) sort(str,left,r);
}


void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        string str[n+1];
        for(int i=0;i<n;i++)
            cin >> str[i];
        sort(str,0,n-1);
        for(int i=0;i<n;i++) cout << str[i];
        cout << endl;
    }
}

int main(){
    run();
    return 0;
}