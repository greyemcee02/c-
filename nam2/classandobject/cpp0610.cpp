#include<bits/stdc++.h>

using namespace std;

class PhanSo{
    private:
        long long TuSo, MauSo;
    public:
        PhanSo(long long TuSo=1,long long MauSo=1){
            this->TuSo=TuSo;
            this->MauSo=MauSo;
        }
        long long ucln(){
            long long a=this->TuSo, b=this->MauSo;
            while(b>0){
                long long tmp=b;
                b=a%b;
                a=tmp;
            }
            return a;
        }
        void rutgon(){
            long long ucm=this->ucln();
            this->TuSo/=ucm;
            this->MauSo/=ucm;
        }
        friend istream &operator>>(istream &in,PhanSo &PS){
            in >> PS.TuSo >> PS.MauSo;
            return in;
        }
        friend ostream &operator<<(ostream &out,PhanSo PS){
            out << PS.TuSo << "/" << PS.MauSo;
            return out;
        }
        PhanSo operator + (PhanSo P){
            P.TuSo=this->TuSo*P.MauSo+this->MauSo*P.TuSo;
            P.MauSo=this->MauSo * P.MauSo;
            P.rutgon();
            return P;
        }
       
        ~PhanSo(){}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}