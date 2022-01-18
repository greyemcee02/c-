#include<bits/stdc++.h>
#include<fstream>

using namespace std;

struct Student{
	int id;
	char name[20];
	float point;
};

int main(){
	Student st1;
	st1.id = 1;
	strcpy(st1.name,"Tran Van");
	st1.point = 8;
	ofstream fs;
	fs.open("nhiphan1.data", ios::binary);
	fs.write(reinterpret_cast<char *>(&st1), sizeof(Student));
	fs.close();
	ifstream fs1;
	fs1.open("nhiphan1.data", ios::binary);
	fs1.read(reinterpret_cast<char *> (&st1), sizeof(Student));
	fs1.close();
	cout << st1.id << " " << st1.name << " " << st1.point;
	return 0;
}
