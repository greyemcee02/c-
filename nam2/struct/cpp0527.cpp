#include<iostream>

using namespace std;

struct time{
    int h, m, s;
};

void input(struct time T[], int n){
    for(int i=0;i<n;i++)
        cin >> T[i].h >> T[i].m >> T[i].s;
}

int ss(struct time s1,struct time s2){
    if(s1.h>s2.h) return 1;
    if(s1.h<s2.h) return 0;
    if(s1.m>s2.m) return 1;
    if(s1.m<s2.m) return 0;
    if(s1.s>s2.s) return 1;
    return 0;
}

void swap(struct time *s1, struct time *s2){
    struct time tmp= *s1;
    *s1=*s2;
    *s2=tmp; 
}

void sort(struct time T[], int left, int right){
    int l=left, r=right;
    struct time pivot = T[(l+r)/2];
    while(l<=r){
        while(ss(pivot,T[l])) l++;
        while(ss(T[r],pivot)) r--;
        if(l<=r){
            swap(T[r],T[l]);
            l++; r--;
        }
    }
    if(l<right) sort(T,l,right);
    if(r>left) sort(T,left,r);
}

int main(){
    int n;
    cin >> n;
    struct time T[n];
    input(T,n);
    sort(T,0,n-1);
    for(int i=0;i<n;i++)
        cout << T[i].h << " " << T[i].m << " " << T[i].s << endl;
    return 0;
}