#include<iostream>
#include<iomanip>
using namespace std;

struct ThiSinh{
    string Name, Ns;
    double D1, D2, D3, Sum;
};

void nhap(struct ThiSinh &A){
    getline(cin,A.Name);
    getline(cin,A.Ns);
    cin >> A.D1 >> A.D2 >> A.D3;
    A.Sum = A.D1+A.D2+A.D3;
}

void in(struct ThiSinh A){
    cout << A.Name << " " << A.Ns << " " << fixed << setprecision(1) << A.Sum;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}