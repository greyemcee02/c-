#include<bits/stdc++.h>

using namespace std;

int cnt = 0;
class SinhVien{
	private:
		int id;
		string hoten, lop, ngaysinh;
		float gpa;
	public:
		void chuanten(){
			stringstream ss(hoten);
			string token;
			hoten = "";
			while(ss >> token){
				token[0] = toupper(token[0]);
				for(int i = 1; i < token.length(); i++)
					token[i] = tolower(token[i]);
				hoten += token + ' ';
			}
			if(!hoten.empty())
			hoten.pop_back();
		}
		
		void chuanngay(){
			if(ngaysinh[1] == '/') ngaysinh = '0' + ngaysinh;
			if(ngaysinh[4] == '/') ngaysinh.insert(3, "0");
		}
		
		friend istream &operator >> (istream &in, SinhVien &sv){
			scanf("\n");
			getline(in, sv.hoten);
			in >> sv.lop >> sv.ngaysinh >> sv.gpa;
			cnt++;
			sv.id = cnt;
			sv.chuanten();
			sv.chuanngay();
			return in;
		}
		
		friend ostream &operator << (ostream &os, SinhVien sv){
			os << "B20DCCN";
			os << setw(3) << setfill('0') << sv.id;
			os << " " << sv.hoten << " " << sv.lop << " " << sv.ngaysinh
			<< " ";
			os << fixed << setprecision(2) << sv.gpa << endl;
			return os;
		}
		
		float getgpa(){
			return gpa;
		}
};

 

bool cmp(SinhVien sv1, SinhVien sv2){
	return(sv1.getgpa() > sv2.getgpa());
}

void sapxep(SinhVien ds[], int n){
	sort(ds, ds + n, cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

//2
//ngUYen Van NaM
//D20DCCN01-B
//2/12/2002
//2.17
//Nguyen QuanG hAi
//D20DCCN02-B
//1/9/2002
//3.0
