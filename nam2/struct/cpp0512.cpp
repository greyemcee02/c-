#include<iostream>

using namespace std;

struct PhanSo{
    long long tu, mau;
};

long long ucln(long long a, long long b){
    while(b>0){
        long long tm=b;
        b=a%b;
        a=tm;
    }
    return a;
}

void rg(long long &Tu,long long &Mau){
    long long tm=ucln(Tu,Mau);
    Tu/=tm; Mau/=tm;
}

void process(struct PhanSo A, struct PhanSo B){
    struct PhanSo C, D;
    rg(A.tu,A.mau);
    rg(B.tu,B.mau);
    long long bcnn=(A.mau*B.mau)/ucln(A.mau,B.mau);
    C.tu=(A.tu*(bcnn/A.mau)+B.tu*(bcnn/B.mau))*
    (A.tu*(bcnn/A.mau)+B.tu*(bcnn/B.mau));
    C.mau=bcnn*bcnn;
    rg(C.tu,C.mau);
    D.tu=A.tu*B.tu*C.tu;
    D.mau=A.mau*B.mau*C.mau;
    rg(D.tu,D.mau);
    cout << C.tu << "/" << C.mau << " " << D.tu << "/" << D.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}