#include<bits/stdc++.h>


using namespace std;

class SinhVien{
    private:
        string name, id, cls, email;
    public:
        SinhVien(){
            name = ""; id = ""; 
            email = ""; cls = "";
        }
        string getid(){
            return id;
        }
        friend istream &operator>>(istream &in, SinhVien &sv);
        friend ostream &operator<<(ostream &out, SinhVien sv);
        ~SinhVien(){}
};


int compare(string id1, string id2){
    if(id1<id2) return 1;
    return 0;
}

istream &operator>>(istream &in, SinhVien &sv){
    scanf("\n");
    getline(in,sv.id);
    getline(in,sv.name);
    getline(in,sv.cls);
    getline(in,sv.email);
    return in;
}

ostream &operator<<(ostream &out, SinhVien sv){
    out << sv.id << " " << sv.name << " " << sv.cls << " " << sv.email << endl;
    return out;
}

void Swap(SinhVien &sv1, SinhVien &sv2){
    SinhVien tmp = sv1;
    sv1 = sv2;
    sv2 = tmp;
}

void sapxep(SinhVien ds[], int N){
    for(int i=0;i<N;i++){
        for(int j=N-1;j>i;j--){
            string id1 = ds[j].getid();
            string id2=ds[j-1].getid();
            if(compare(id1,id2)){
                Swap(ds[j],ds[j-1]);
            }
        }
    }
}

int main(){
    SinhVien ds[1001], tmp;
    int n=0;
    while(cin >> tmp){
        ds[n++] = tmp;
    }
    sapxep(ds,n);
    for(int i=0;i<n;i++)
        cout << ds[i];
    return 0;
}