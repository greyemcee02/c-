#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
using namespace std;

char d101[16] ="ABBADCCABDCCABD", 
d102[16]="ACCABCDDBBCDDBB";

int kt(char a[]){
    int D=0;
    char tmp;
    for(int i=0;i<15;i++){
        cin >> tmp;
        if(tmp==a[i]) D++;
    }
    return D;
}

void run(){
    int t, de, dung;
    cin >> t;
    while(t--){
        cin >> de ;
        if(de==101) dung=kt(d101);
        else dung=kt(d102);
        cout << fixed << setprecision(2) << (double)dung*2/3 << endl;
    }
}

int main(){
    run();
    return 0;
}