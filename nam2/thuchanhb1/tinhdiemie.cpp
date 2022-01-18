#include<bits/stdc++.h>

using namespace std;

float dt[41] = {};

void create(){
    for(int i = 3; i <= 40; i++){
        if(i>= 3 && i<=4) dt[i] = 2.5;
        else if(i >= 5 && i <= 6) dt[i] = 3.0;
        else if(i >= 7 && i <= 9) dt[i] = 3.5;
        else if(i >= 10 && i <= 12) dt[i] = 4.0;
        else if(i >= 13 && i <= 15) dt[i] = 4.5;
        else if(i >= 16 && i <= 19) dt[i] = 5.0;
        else if(i >= 20 && i <= 22) dt[i] = 5.5;
        else if(i >= 23 && i <= 26) dt[i] = 6.0;
        else if(i >= 27 && i <= 29) dt[i] = 6.5;
        else if(i >= 30 && i <= 32) dt[i] = 7.0;
        else if(i >= 33 && i <= 34) dt[i] = 7.5;
        else if(i >= 35 && i <= 36) dt[i] = 8.0;
        else if(i >= 37 && i <= 38) dt[i] = 8.5;
        else dt[i] = 9.0;
    }
}

int main(){
    create();
    int t;
    int rd, ls;
    float sp, wr;
    cin >> t;
    while(t--){
        cin >> rd >> ls >> sp >> wr;
        float s = dt[rd] + dt[ls] + sp + wr;
        s/=4;
        int tmp = (int) s;
        if(s - tmp >= 0.75) cout << fixed << setprecision(1) << (float)tmp+1;
        else if(s - tmp >= 0.25) cout << fixed << setprecision(1) << (float)tmp + 0.5;
        else cout << fixed << setprecision(1) << (float)tmp ;
        cout << endl;
    }
    return 0;
}
