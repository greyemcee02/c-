#include<iostream>

using namespace std;

void create(int **A, int n){
	int d=1;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++){
		A[i][j]=d;
		d++;
	}
	
}

void in(int *a, int n){
	for(int i=n-1;i>=0;i--) cout <<  a[i] << " ";
	cout << endl; 
}

void kq(int **A,int n){
	int len=0, b=0, *c1 = new int [16*n*n/2], *c2 = new int [16*n*n/2];
	while(b<4*n/2){
		if(b%2==0){
			for(int i=b;i<4*n-b;i++){
				c1[len]=A[4*n-i-1][4*n-1-b];
				c2[len]=A[i][b];
				len++;
			}
			for(int i=4*n-2-b;i>b;i--){
				c1[len]=A[b][i];
				c2[len]=A[4*n-1-b][4*n-1-i];
				len++;
			}
		}
		else{
			for(int i=b;i<4*n-b;i++){
				c2[len]=A[4*n-i-1][4*n-1-b];
				c1[len]=A[i][b];
				len++;
			}
			for(int i=4*n-2-b;i>b;i--){
				c2[len]=A[b][i];
				c1[len]=A[4*n-1-b][4*n-1-i];
				len++;
			}
		}
		b++;
	}
	in(c1,len);
	in(c2,len);
	delete[] c1;
	delete[] c2;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int m=4*n;
		int **A = new int *[m];
		for(int i=0;i<m;i++) 
			A[i]=new int[m];
		create(A,m);
		kq(A,n);
		//for(int i=0;i<4*n;i++)
		//for(int j=0;j<4*n;j++) cout << A[i][j] << " ";
 		for(int i=0;i<n;i++) 
			delete[] A[i];
		delete[] A;
	}
}
