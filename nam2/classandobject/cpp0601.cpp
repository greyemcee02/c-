#include<bits/stdc++.h>

using namespace std;

#define a() a
class SinhVien{
    public:
        SinhVien() 
        :name("Nguyen Van A"), masv("B20DCCN001"){}
        void setname(string s);
        void setlop(string s);
        void setgpa(double gpa);
        void setmonth(int m);
        void setyear(int y);
        void setdays(int d);
        string getname(){
            return name;
        }
        string getmasv(){
            return masv;
        }
        string getlop(){
            return lop;
        }
        int getday(){
            return day;
        }
        int getmonth(){
            return month;
        }
        int getyear(){
            return year;
        }
        double getgpa(){
            return gpa;
        }
        ~SinhVien(){}
    private:
        const string name, masv;
        string lop;
        double gpa;
        int day, month, year;
};

void SinhVien::setlop(string s){
    lop=s;
}
void SinhVien::setdays(int d){
    day=d;
}
void SinhVien::setmonth(int m){
    month=m;
}
void SinhVien::setyear(int y){
    year=y;
}
void SinhVien::setgpa(double gpa){
    this->gpa=gpa;
}

void nhap(SinhVien &a){
    string tmp;
    char t;
    getline(cin,tmp);
    getline(cin,tmp);
    a.setlop(tmp);
    int d, m, y;
    cin >> d >> t >> m >> t >> y;
    a.setdays(d);
    a.setmonth(m);
    a.setyear(y);
    double gpa;
    cin >> gpa;
    a.setgpa(gpa);
}

void in(SinhVien &a){
    cout << a.getmasv() << " " << a.getname() << " " << a.getlop() << " ";
    cout << setw(2) << setfill('0') << a.getday(); 
    cout <<'/' ;
    cout << setw(2) << setfill('0') << a.getmonth(); 
    cout << '/';
    cout << a.getyear()<< " " << fixed << setprecision(2) << a.getgpa(); 
    
}
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}