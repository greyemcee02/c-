#include<bits/stdc++.h>

using namespace std;
struct sinhVien{
	char name[20];
};
int main(){
	int n;
	cin >> n;
	cin.ignore();
	sinhVien sv[n];
	for(int i = 0; i < n; i++){
		gets(sv[i].name);
	}
	ofstream fp;
	fp.open("A.txt");
	fp << n;
	for(int i = 0; i < n; i++)
		fp << sv[i].name ;
	fp.close();
	
	ifstream fp1;
	fp1.open("A.txt");
	string tmp;
	getline(fp1,tmp);
	fp1.close();
	
	ofstream fp2;
	fp2.open("B.txt");
	fp2 << tmp;
	fp2.close();
	return 0;
}
