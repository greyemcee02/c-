#include<iostream>
#include<iomanip>
using namespace std;

struct diem{
    int x, y;
};

void nhap(struct diem D[], int n){
    for(int i=0;i<n;i++){
        cin >> D[i].x >> D[i].y;
    }
}

void dientich(struct diem D[], int n){
    long long s1=D[n-1].x*D[0].y, s2=D[n-1].y*D[0].x;
    for(int i=0;i<n-1;i++){
        s1+=D[i].x*D[i+1].y;
        s2+=D[i].y*D[i+1].x;
    }
    cout << fixed << setprecision(3) << (double)s1/2-(double)s2/2 << endl;
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        struct diem D[n];
        nhap(D,n);
        dientich(D,n);
    }
    return 0;
}