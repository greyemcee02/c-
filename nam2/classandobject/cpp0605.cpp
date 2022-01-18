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
        friend istream &operator>>(istream &in,PhanSo &PS){
            in >> PS.TuSo >> PS.MauSo;
            return in;
        }
        friend ostream &operator<<(ostream &out,PhanSo &PS){
            out << PS.TuSo << "/" << PS.MauSo;
            return out;
        }
        long long ucln(){
            long long a=TuSo, b=MauSo;
            while(b>0){
                long long tmp=b;
                b=a%b;
                a=tmp;
            }
            return a;
        }
        void rutgon(){
            long long ucm=ucln();
            TuSo/=ucm;
            MauSo/=ucm;
        }
        ~PhanSo(){}
    
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}