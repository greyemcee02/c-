#include<bits/stdc++.h>

using namespace std;

class SinhVien{
    public:
        SinhVien() 
        :id("B20DCCN"){
            name=""; cls="";
            birth_day=""; gpa=0;
        }
        static int count;
        friend istream &operator>>(istream &in,SinhVien &sv);
        friend ostream &operator<<(ostream &out, SinhVien sv);
        void stdday(string &day);
        ~SinhVien(){}
    private:
        string id, name, cls, birth_day;
        int number;
        float gpa;
};

int SinhVien:: count=1;

void SinhVien::stdday(string &day){
    if(day[1]=='/') day="0"+day;
    if(day[4]=='/') day.insert(3,"0");
}

istream &operator>>(istream &in, SinhVien &sv){
    sv.number=sv.count;
    sv.count++;
    scanf("\n");
    getline(in,sv.name);
    getline(in,sv.cls);
    getline(in,sv.birth_day);
    sv.stdday(sv.birth_day);
    in >> sv.gpa;
    return in;
}

ostream &operator<<(ostream &out, SinhVien sv){
    out << sv.id;
    out << setw(3) << setfill('0') << sv.number <<" ";
    out << sv.name << " " << sv.cls << " " << sv.birth_day << " ";
    out << fixed << setprecision(2) << sv.gpa << endl;
    return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}