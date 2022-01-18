#include<iostream>
#include<fstream>
using namespace std;

int main(){
//	ofstream fp1;
//	fp1.open("Nhom2.txt");
//	fp1 << 20;
//	fp1.close();
	int n;
	ifstream fp2;
	fp2.open("Nhom2.txt");
	fp2 >> n;
	fp2.close();
	n += 2;
	ofstream fp3;
	fp3.open("last.txt");
	fp3 << "N = " << n;
	fp3.close();
	fp3.open("last1.out");
	n = 500;
	fp3 << "N : " << n;
	fp3.close();
	return 0;
}
