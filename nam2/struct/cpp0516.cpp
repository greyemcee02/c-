#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct mathang{
    int tt;
    double mua,ban, lai;
    string name,nhom;
};

void nhap(struct mathang mh[], int n){
    for(int i=0;i<n;i++){
        mh[i].tt=i+1;
        cin.ignore();
        getline(cin,mh[i].name);
        getline(cin,mh[i].nhom);
        cin >> mh[i].mua >> mh[i].ban; 
        mh[i].lai= -mh[i].mua+ mh[i].ban;
    }
}

void SWAP(struct mathang &s1, struct mathang &s2){
    struct mathang tm=s1;
    s1=s2;
    s2=tm;
}

void sort(struct mathang mh[],int n){
    for(int i=0;i<n;i++)
    for(int j=n-1;j>i;j--)
    if(mh[j].lai > mh[j-1].lai) SWAP(mh[j],mh[j-1]);
}

void in(struct mathang mh[],int n){
    for(int i=0;i<n;i++)
    cout << mh[i].tt << " " << mh[i].name << " "<<
    mh[i].nhom << " " << fixed << setprecision(2) << mh[i].lai << endl;
}

int main(){
    int n;
    cin >> n;
    struct mathang mh[n];
    nhap(mh,n); 
    sort(mh,n);
    in(mh,n);
}