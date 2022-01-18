#include<bits/stdc++.h>
#include<string>
using namespace std;

int cnt = 0;

class SinhVien{
    private:
        string name, cls, bd;
        float gpa;
        int id;
    public:
        void chuanNgay(){
            if(bd[1] == '/') bd = '0' + bd;
            if(bd[4] == '/') bd.insert(3, "0");
        }
        void chuanTen(){
            stringstream ss(name);
            string token;
            name = "";
            while(ss >> token){
                token[0] = toupper(token[0]);
                for(int i = 1; i < token.length(); i++)
                    token[i] = tolower(token[i]);
                name += token + ' ';
            }
            name.pop_back();
        }
        friend istream &operator >>(istream &in, SinhVien &sv){
            scanf("\n");
            getline(in, sv.name);
            in >> sv.cls >> sv.bd >> sv.gpa;
            sv.chuanNgay();
            sv.chuanTen();
            cnt++;
            sv.id = cnt;
            return in;
        }
        friend ostream &operator <<(ostream &out, SinhVien sv){
            out << "B20DCCN" << setw(3) << setfill('0') << sv.id;
            out << " " << sv.name << " "
                << sv.cls << " "
                << sv.bd  << " "
                << fixed << setprecision(2) << sv.gpa << endl;
            return out;
        }
        float getGPA(){
            return gpa;
        }
};

bool cmpp(SinhVien &s1, SinhVien &s2){
        return (s1.getGPA() > s2.getGPA());
}

void sapxep(SinhVien ds[], int N){
    sort(ds,ds+N, cmpp);
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
