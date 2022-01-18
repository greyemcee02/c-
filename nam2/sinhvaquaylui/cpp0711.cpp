#include<iostream>

using namespace std;

void sinh(int a[], int n, int k){
	for(int i=0;i<=1;i++){
		a[k]=i;
		if(k==n-1){
			for(int j=0;j<n;j++) cout << a[j];
			cout << " ";
		}
		else{
			sinh(a,n,k+1);
		}
	}
}

int main(){
	int a[20], n, t;
	cin >> t;
	while(t--){
		cin >> n;
		sinh(a,n,0);
		cout << endl;
	}
	return 0;
	
}