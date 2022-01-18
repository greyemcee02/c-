#include<iostream>

using namespace std;

string maxnumber(int m, int s){
    if(s>m*9||s==0) return "-1";
    string maxnb="";
    for(int i=0;i<=m-1;i++){
        if(s>9){
            maxnb=maxnb+'9';
            s-=9;
        }
        else{
            maxnb=maxnb+(char)(s+'0');
            s=0;
        }
    }
    return maxnb;
}


string minnumber(int m, int s){
    if(s>m*9||s==0) return "-1";
    string minnb="";
    s-=1;
    for(int i=0;i<m-1;i++){
        if(s>9){
            minnb='9'+minnb;
            s-=9;
        }
        else{
            minnb=(char)(s+'0') + minnb;
            s=0;
        }
    }
    minnb= (char)(s+1+'0')+minnb;
    return minnb;
}

int main(){
    int m , s;
    cin >> m >> s;
    cout <<  minnumber(m,s) << " " <<maxnumber(m,s) << endl;
    return 0;
}