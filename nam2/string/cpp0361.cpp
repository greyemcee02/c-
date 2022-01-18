#include<iostream>
#include<string>

using namespace std;

int kt(string s1, string s2){
    if(s1.length()<s2.length()){
        if(s2.find(s1)!=string::npos) return 1;
        return 0;
    } 
    else if(s1.length()>s2.length()){
        if(s1.find(s2)!=string::npos) return 1;
        return 0;
    }
    return 0;
}

long long kq(string *str, int *xh, int m){
    long long dem =0;
    for(int i=0;i<m;i++){
        dem+=xh[i]*(xh[i]-1);
        for(int j=i+1;j<m;j++){
            if(kt(str[j],str[i])){
                dem+=xh[j]*xh[i];
            }
            
        }
    }
    return dem;
}

void run(){
    int n, m=0;
    cin >> n;
    string *str = new string [n], tmp;
    int *xh = new int [n];
    fill(xh,xh+n,0);
    cin >> str[0];
    xh[m++]++;
    for(int i=1;i<n;i++){
        cin>>tmp;
        int dd=0;
        for(int j=0;j<m;j++){
            if(str[j]==tmp){
                xh[j]++;
                dd=1;
                break;
            }
        }
        if(dd==0){
            str[m]=tmp;
            xh[m++]=1;
        }
    } 
    cout << kq(str,xh,m) << endl;
    //for(int i=0;i<m;i++) cout << str[i] << " " << xh[i] << endl;
    delete[] str;
    delete[] xh;
}

int main(){
    run();
    return 0;
}