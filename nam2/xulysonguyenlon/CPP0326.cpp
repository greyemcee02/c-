#include<bits/stdc++.h>

using namespace std;

void tich(string num1, string num2){
	int len1 = num1.length(), len2 = num2.length();
	int *kq = new int[len2+len1+1];
	fill(kq,kq+len2+len1+1,0);
	for(int i = len2-1; i >= 0; i--){
		for(int j =len1 - 1; j >= 0; j--){
			kq[i+j+2] += (num1[j]-'0') * (num2[i]-'0');
		}
	}
	for(int i = len2+len1; i >0 ; i--){
		kq[i-1] += kq[i]/10;
		kq[i] %= 10;
	}
	int i = 0;
	while(kq[i] == 0) i++;
	for(i; i <= len2 + len1; i++)
		cout << kq[i];
	cout << endl;
	delete[] kq;
}

int main(){
	int t; cin >> t;
	string num1, num2;
	while(t--){
		cin >> num1 >> num2;
		if(num1.length() > num2.length())
			tich(num1,num2);
		else tich(num2, num1);
	}
	return 0;
}
