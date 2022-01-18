#include<iostream>

using namespace std;

void in(int *A, int n){
	for(int i=0;i<n;i++) cout << A[i] << " ";
	cout << endl;
}

void Swap(int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}

void hoan_vi_truoc(int *A, int n){
	int i=n-1;
	while(i>=0&&A[i]>A[i-1]) i--;
	int a=i, b=n-1;
	while(a<b){
		Swap(A[a],A[b]);
		a++;b--;
	}
	int j=i;
	while(A[i-1]<A[j]) j++;
	swap(A[j],A[i-1]);
	in(A,n);
}

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int *A = new int [n];
		for(int i=0;i<n;i++) cin >> A[i];
		hoan_vi_truoc(A,n);
		delete[] A;
	}
	return 0;
}