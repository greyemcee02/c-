#include <iostream>
#include <cmath>
using namespace std;

void run(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int max, min, max1, min1;
        cin >> max;
        for(int i=1;i<n;i++){
            cin >> max1;
            if(max<max1) max=max1;
        }
        cin >> min;
        for(int i=1;i<m;i++){
            cin >> min1;
            if(min>min1) min=min1;
        }
        cout << (long long)max*min << endl;
    }
}

int main(){
    run();
    return 0;
}     