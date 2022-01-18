#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void run(){
    int t ;
    double x1, x2 , y1, y2;
    cin >> t;
    while(t--){
        cin >> x1 >> y1 >> x2 >> y2;
        cout << fixed << setprecision(4) << 
        sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)) << endl;
    }
}

int main(){
    run();
    return 0;
}