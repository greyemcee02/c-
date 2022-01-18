#include<bits/stdc++.h>

using namespace std;


void solution(vector<int> vt[], int m, int a, int &res){
    stack<int> stk;
    int j = 0;
    while(j < m){
        if(stk.empty() || vt[a][j] >= vt[a][stk.top()]){
            stk.push(j);
            j++;
        }
        else{
            int x = stk.top();
            stk.pop();
            if(!stk.empty())
                res = max(vt[a][x]*(j-stk.top() - 1), res);
            else
                res = max(vt[a][x]*j, res);
        }
    }
    while(!stk.empty()){
        int x = stk.top();
        stk.pop();
        if(!stk.empty()){
            res = max((m - stk.top() - 1)*vt[a][x], res);
        }
        else 
            res = max(m*vt[a][x], res);
    }

}

int main(){
    int t, n, m, x, ress;
    cin >> t;
    while(t--){
        cin >> n >> m;
        ress = -1;
        vector<int> vt[n];
        for(int i = 0; i < m; i++){
            cin >> x;
            vt[0].push_back(x);
        }
        for(int i = 1; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> x;
                vt[i].push_back(x);
                if(vt[i][j])
                    vt[i][j] += vt[i-1][j];
            }
        }
        for(int i = 0; i < n; i++)
            solution(vt, m, i, ress);
        cout << ress << endl;
    }
    return 0;
}