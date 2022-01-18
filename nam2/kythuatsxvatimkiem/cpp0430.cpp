#include <iostream>
#include <cmath>
using namespace std;

void run(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int max, min, tmp, *a = new int[100001], d=0;
        for(int i=0;i<100001;i++) a[i]=0;
        cin >> tmp;
        a[tmp]=1;
        max =tmp;
        min=tmp;
        for(int i=1;i<n;i++){
            cin >> tmp;
            a[tmp]=1;
            max=(max<tmp)?tmp:max;
            min=(min>tmp)?tmp:min;
        }
        for(int i=min;i<max;i++) if(!a[i]) d++;
        cout << d << endl;
        delete[] a;
    }
}

int main(){
    run();
    return 0;
}     