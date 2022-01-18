#include<iostream>

using namespace std;

int main(){
    int t, x, y, p;
    cin >> t;
    while(t--){
        cin >> x >> y >> p;
        long long a=1;
        for(int i=1;i<=y;i++){
            a=(a*x)%p;
        }
        cout << a << endl;
    }
    return 0;
}