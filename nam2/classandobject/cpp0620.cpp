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
        string getcls(){
            return cls;
        }
        string getid(){
            return id;
        }
        friend istream &operator>>(istream &in, SinhVien &sv);
        friend ostream &operator<<(ostream &out, SinhVien sv);
        ~SinhVien(){}
};


int compare(string cls1, string id1, string cls2, string id2){
    if(cls1<cls2) return 1;
    else if(cls1==cls2){
        if(id1<id2) return 1;
    }
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
            string cls1=ds[j].getcls();
            string id1 = ds[j].getid();
            string cls2=ds[j-1].getcls();
            string id2=ds[j-1].getid();
            if(compare(cls1,id1,cls2,id2)){
                Swap(ds[j],ds[j-1]);
            }
        }
    }
}

int main(){
    SinhVien ds[1001];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}