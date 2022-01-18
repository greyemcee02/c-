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
    int uc=__gcd(p.ts,p.ms);
    p.ts/=uc;
    p.ms/=uc;
}

struct PhanSo tong(struct PhanSo p, struct PhanSo q){
    rutgon(p); rutgon(q);
    int gcd=__gcd(p.ms,q.ms);
    long long bcnn=(long long)p.ms*q.ms/gcd;
    p.ts*=(bcnn/p.ms);
    p.ms=bcnn;
    q.ts*=(bcnn/q.ms);
    q.ms=bcnn;
    struct PhanSo sum;
    sum.ts=p.ts+q.ts;
    sum.ms=p.ms;
    rutgon(sum);
    return sum;
}

void in(struct PhanSo p){
    cout << p.ts << "/" << p.ms ;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}