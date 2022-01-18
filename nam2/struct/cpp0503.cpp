#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

struct PhanSo{
    long long ts, ms;
};

void nhap(struct PhanSo &p){
    cin >> p.ts >> p.ms;
}
void rutgon(struct PhanSo &p){
    long long uc=__gcd(p.ts,p.ms);
    p.ts/=uc;
    p.ms/=uc;
}

void in(struct PhanSo p){
    cout << p.ts << "/" << p.ms ;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}