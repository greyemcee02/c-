#include<bits/stdc++.h>
using namespace std;

class canbo{
    private:
		string hoten;
		long long luongcoban;
	public:
		friend class danhsach;
		friend class luongcb;
		void nhapbp(){
			cout << "\nHo ten: "; getline(cin,hoten);
			cout << "\nLuong co ban: "; cin >> luongcoban;
			cin.ignore();
		}
		void xemmh(){
			cout << hoten << " " << luongcoban << endl;
		}
		bool ss(canbo b){
			return (this->luongcoban>b.luongcoban);
		}
};

class danhsach{
	private:
		vector<canbo> dscb;
	public:
		void nhapbp(){
			canbo CB;
			int TS; 
			cout <<"TS: "; cin >> TS;
			cin.ignore();
			for (int i = 0; i < TS; i++) {
				CB.nhapbp();
				dscb.push_back(CB);
			}
		}
		void xemmh(){
			for (int i = 0; i < dscb.size(); i++){
				dscb[i].xemmh();
			}
		}
		void sapxepgiam(){
			for(int i = 0 ; i < dscb.size(); i++){
				for(int j = dscb.size()-1; j >i; j--){
					if(dscb[j].ss(dscb[j-1])) 
						swap(dscb[j], dscb[j-1]);	
				}
			}
		}
		int luong
};

class luongcb : private canbo{
	private:
		int ngaycong, luong;
	bublic:
		
};

class bangluong{
	private:
		int thang, tongluong;
		vector<luongcb> dslcb;
	public:
		bangluong(danhsach a){
			for(int i =0; i< )
		}
};

main(){
	danhsach a;
	a.nhapbp();
	a.xemmh();
	a.sapxepgiam();
	a.xemmh();
}
