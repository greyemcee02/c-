#include<iostream>
#include<string>
using namespace std;

int kt(string str){
    int *number = new int[10];
    fill(number,number+10,0);
    if(str[0]<='0'||str[0]>'9') return -1;
    else number[str[0]-'0']=1;
    for(int i=1;i<str.length();i++){
        if(str[i]<='9'&& str[i]>='0') 
        number[str[i]-'0']=1;
        else return -1;
    }
    for(int i=0;i<10;i++) 
    if(number[i]==0) return 0;
    return 1;
}

void run(){
    int t;
    string str;
    cin >> t;
    //cin.ignore();
    while(t--){
        cin >> str;
        //cin.ignore();
        int ktt=kt(str);
        if(ktt==-1) cout << "INVALID" <<endl;
        else if(ktt==1) cout << "YES" << endl;
        else cout << "NO" <<endl;
		
    } 
    
}

int main(){
    run();
    return 0;
}