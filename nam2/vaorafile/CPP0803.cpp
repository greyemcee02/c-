#include<bits/stdc++.h>

using namespace std;

int cd(string str){
	int kq = 0;
	for(int i = 0; i < str.length(); i++)
		kq = kq*10 + (str[i] - '0');
	return kq;
}

int main(){
	ifstream ifs;
	ifs.open("DATA.in");
	int *num = new int [1001];
	memset(num,0,1001); 
	string str;
	while(!ifs.eof()){
		ifs >> str;
		if(!ifs.eof() && isdigit(str[0]) && str.length() < 5)
			num[cd(str)]++;
	}
	ifs.close();
	for(int i = 0; i <= 1000; i++)
		if(num[i] > 0) cout << i << " " << num[i] << endl;
	delete[] num;
	return 0;
}
