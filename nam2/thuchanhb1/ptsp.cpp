#include<bits/stdc++.h>

using namespace std;

struct SoPhuc{
    int thuc, ao;
};

SoPhuc binh_phuong_tong(SoPhuc A, SoPhuc B){
    SoPhuc C;
    C.thuc = pow((A.thuc + B.thuc),2) - pow((A.ao+B.ao),2);
    C.ao = 2*(A.thuc+B.thuc)*(A.ao+B.ao);
    return C;
}

void hien_thi(SoPhuc C){
    cout << C.thuc;
    if(C.ao >= 0) cout << " + " << C.ao << "i";
    else cout << " - " << abs(C.ao) << "i";
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}