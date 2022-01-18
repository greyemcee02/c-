#include<iostream>
#include<iomanip>
using namespace std;

struct SinhVien{
    string Name, MaSV, Class;
    double D1, D2, D3;
};

void nhap(struct SinhVien &sv){
        cin >> sv.MaSV;
        scanf("\n");
        getline(cin,sv.Name);
        cin >> sv.Class >> sv.D1 >> sv.D2 >> sv.D3;
    
}

int ss(string name1, string name2){
    string tm1=name1+name2;
    string tm2=name2+name1;
    if(tm1<tm2) return 1;
    return 0;
}
void SWAP(struct SinhVien &s1, struct SinhVien &s2){
    struct SinhVien tmp=s1;
    s1=s2;
    s2=tmp;
}

void sort(struct SinhVien sv[], int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(sv[j].Name < sv[j-1].Name)
                SWAP(sv[j],sv[j-1]);
        }
    }
}

void in(struct SinhVien sv[],int n){
    for(int i=0;i<n;i++){
        cout << i+1 << " " <<sv[i].MaSV << " " << sv[i].Name
        << " " << sv[i].Class << " " ;
        cout << fixed << setprecision(1) << sv[i].D1 << " ";
        cout << fixed << setprecision(1) << sv[i].D2 << " ";
        cout << fixed << setprecision(1) << sv[i].D3 << endl;
    }
}

int main(){
    int n;
    cin >> n;
    struct SinhVien SV[n];
    for(int i=0;i<n;i++) nhap(SV[i]);
    sort(SV,n);
    in(SV,n);
    return 0;
}