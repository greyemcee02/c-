#include<iostream>

using namespace std;

struct Diem{
    int x, y, z;
};

void nhap(struct Diem &a){
    cin >> a.x >> a.y >> a.z;
}

void createvt(struct Diem &AB, struct Diem A, struct Diem B){
    AB.x=B.x-A.x;
    AB.y=B.y-A.y;
    AB.z=B.z-A.z;
}

int kq(struct Diem AB, struct Diem AC, struct Diem AD){
    struct Diem tmp;
    tmp.x=AB.y*AC.z-AC.y*AB.z;
    tmp.y=AB.z*AC.x-AC.z*AB.x;
    tmp.z=AB.x*AC.y-AC.x*AB.y;
    int a=tmp.x*AD.x+tmp.y*AD.y+tmp.z*AD.z;
    if(a==0) return 1;
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        struct Diem A, B, C, D;
        nhap(A);nhap(B);
        nhap(C);nhap(D);
        struct Diem AB,AC,AD;
        createvt(AB,A,B);
        createvt(AC,A,C);
        createvt(AD,A,D);
        cout << (kq(AB,AC,AD)?"YES":"NO") << endl;
    }
    return 0;
}