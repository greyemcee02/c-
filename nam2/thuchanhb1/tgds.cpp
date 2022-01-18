#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin >> n;
    stack<int> stk;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(stk.empty() || (stk.top()+x) %2 !=0 ) stk.push(x);
        else if((stk.top() + x) %2 ==0) stk.pop();
    }
    cout << stk.size();
    return 0;
}
