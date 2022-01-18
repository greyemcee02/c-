#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int findstr(string s1, string str1[], int len1){
    for(int i=0;i<len1;i++) if(s1==str1[i]) return i;
    return -1;
}

void SWAP(string &s1, string &s2){
    string tm=s1;
    s1=s2;
    s2=tm;
}

void tach(string s1, string str1[],int &len1){
    stringstream ss(s1);
    string token;
    while(ss >> token){
        if(findstr(token,str1,len1)==-1) str1[len1++]=token;
    }
}

void sort(string str1[], int len1){
    for(int i=0;i<len1;i++){
        for(int j=len1-1;j>i;j--){
            string tm=str1[j]+str1[j-1];
            string tm2=str1[j-1]+str1[j];
            if(tm<tm2) SWAP(str1[j],str1[j-1]);
        }
    }
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1, s2;
        getline(cin,s1);
        getline(cin,s2);
        int len1=0, len2=0;
        string str1[500], str2[500];
        tach(s1,str1,len1);
        tach(s2,str2, len2);
        sort(str1,len1);
        int dd[len1]={0};
        for(int i=0;i<len2;i++){
            int f=findstr(str2[i],str1,len1);
            if(f!=-1) dd[f]=1;
        }
        for(int i=0;i<len1;i++) if(dd[i]==0)
        cout << str1[i] << " ";
        cout << endl;
    }
    return 0;
}