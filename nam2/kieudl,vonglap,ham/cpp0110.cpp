#include <iostream>
#include <cstring>
using namespace std;

void kq(char a[]){
    int len = strlen(a);
    for(int i=0;i<len-2;i++){
        if(a[i]=='0' && a[i+1]=='8' && a[i+2]=='4'){
            for(int j=i;j<len-2;j++)
                a[j]=a[j+3];
            break;
        } 
    }
    len-=3;
    a[len]='\0';
    cout << a << endl;
}

void run(){
    int t;
    cin >> t;
    char s[200];
    while(t--){
        cin >> s;
        kq(s);
    }
}

int main(){
    run();
    return 0;
}