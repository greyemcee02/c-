#include<bits/stdc++.h>

using namespace std;

class PhanSo{
    private:
        long long ts, ms;
    public:
        PhanSo(long long ts, long long ms){
            this->ts = ts;
            this->ms = ms;
        }
        void rutgon(){
            long long gcd = __gcd(ts, ms);
            ts/=gcd;
            ms/=gcd;
        }
        friend istream &operator>>(istream &in, PhanSo &ps){
            in >> ps.ts >> ps.ms;
            return in;
        }
        friend ostream &operator <<(ostream &out, PhanSo ps){
            out << ps.ts << "/" << ps.ms;
            return out;
        }
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}