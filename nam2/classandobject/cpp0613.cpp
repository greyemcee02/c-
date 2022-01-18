#include<bits/stdc++.h>

using namespace std;

class SinhVien{
    public:
        SinhVien()
        :id("B20DCCN"){
            name = ""; cls = "" ; birth_day = "";
            gpa = 0; number = 0;
        }
        static int count;
        friend istream &operator>>(istream &in, SinhVien &sv);
        friend ostream &operator<<(ostream &out, SinhVien sv);
        void stdname();
        void stdday();
        //void swap(SinhVien &s1, SinhVien &s2);
        float getgpa(){
            return gpa;
        }
        ~SinhVien(){}
    private:
        string name, id, cls, birth_day;
        float gpa;
        int number;
};

int SinhVien::count=1;

void SinhVien::stdname(){
    string str, token;
    stringstream ss(name);
    while(ss >> token){
        token[0] = toupper(token[0]);
        for(int i=1;i<token.length();i++)
            token[i]=tolower(token[i]);
        str+=token;
        str+=" ";
    }
    str.erase(str.length()-1,1);
    name=str;
}

void SinhVien::stdday(){
    if(birth_day[1]=='/') birth_day="0"+birth_day;
    if(birth_day[4]=='/') birth_day.insert(3,"0");
}


istream &operator>>(istream &in, SinhVien &sv){
    sv.number = sv.count;
    sv.count ++;
    scanf("\n");
    getline(in,sv.name);
    getline(in,sv.cls);
    getline(in,sv.birth_day);
    in >> sv.gpa;
    sv.stdday();
    sv.stdname();
    return in;
}

ostream &operator<<(ostream &out, SinhVien sv){
    out << sv.id ;
    out << setw(3) << setfill('0') << sv.number << " ";
    out << sv.name << " " << sv.cls << " " << sv.birth_day << " ";
    out << fixed << setprecision(2) << sv.gpa << endl;
    return out;
}

void Swap(SinhVien &sv1, SinhVien &sv2){
    SinhVien tmp = sv1;
    sv1 = sv2;
    sv2 = tmp;
}

void qsort(SinhVien sv[], int left, int right){
    int l=left , r=right;
    float pivot = sv[(l+r)/2].getgpa();
    while(l<=r){
        while(sv[l].getgpa() > pivot) l++;
        while(sv[r].getgpa() < pivot) r--;
        if(l<=r){
           Swap(sv[l],sv[r]);
           l++;
           r--; 
        }
    }
    if(l<right) qsort(sv,l,right);
    if(left<r) qsort(sv,left,r);
}

void sapxep(SinhVien sv[], int N){
    qsort(sv,0,N-1);
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