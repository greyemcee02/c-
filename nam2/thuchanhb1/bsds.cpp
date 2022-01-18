#include<bits/stdc++.h>

using namespace std;



int main(){
    int n, x, y, dd = -1;
    vector<int> vt;
    cin >> n;
    x = 0;
    for(int i = 0; i < n; i++){
        cin >> y;
        if(y-1 != x){
            dd = 1;
            for(int j = x + 1; j < y; j++) vt.push_back(j);
        }
        x = y;
    }
    if(dd == -1) cout << "Excellent!";
    else 
        for(auto it : vt)
            cout << it << endl;
    return 0;
}
