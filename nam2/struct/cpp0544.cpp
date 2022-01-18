#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define PI 3.141592653589793238
struct TamGiac{
    double A, B, C;
    double xA,yA,xB,yB,xC,yC;
};

void nhap(struct TamGiac &tg){
    cin >> tg.xA >> tg.yA >> tg.xB >> tg.yB >> tg.xC >> tg.yC;
    tg.A=sqrt((tg.xB-tg.xC)*(tg.xB-tg.xC)+(tg.yB-tg.yC)*(tg.yB-tg.yC));
    tg.B=sqrt((tg.xA-tg.xC)*(tg.xA-tg.xC)+(tg.yA-tg.yC)*(tg.yA-tg.yC));
    tg.C=sqrt((tg.xB-tg.xA)*(tg.xB-tg.xA)+(tg.yB-tg.yA)*(tg.yB-tg.yA));
}

int kttg(double a, double b, double c){
    if((a+b)>c&&(b+c)>a&&(a+c)>b) return 1;
    return 0;
}

double dt(double a, double b, double c){
    double fs = sqrt((a+b+c)*(a+b-c)*(-a+b+c)*(a-b+c));
    double R= (a*b*c)/fs;
    return (double)PI*R*R;
}

int main(){
    int t;
    cin >> t;
    struct TamGiac tg;
    while(t--){
        nhap(tg);
        //cout << tg.A << " " << tg.B << " " << tg.C <<endl;
        if(!kttg(tg.A,tg.B,tg.C)) cout << "INVALID" << endl;
        else  cout << fixed << setprecision(3) << dt(tg.A,tg.B,tg.C) << endl;
    }
    return 0;
}