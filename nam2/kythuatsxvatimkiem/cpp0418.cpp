#include<iostream>

using namespace std;
void run(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int  tmp, *Hop = new int [200002];
        int *Giao=new int [200002], g=0;
        for(int i=0;i<n;i++){
            cin >> tmp;
            Hop[tmp+100000]=1;
        }
        for(int i=0;i<m;i++){
            cin >> tmp;
            if(Hop[tmp+100000]==0) Hop[tmp+100000]=1;
            else Giao[g++]=tmp;
        }
        for(int i=0;i<200001;i++) if(Hop[i]==1) cout << i-100000 << " ";
        cout << endl;
        for(int i=0;i<g;i++) cout << Giao[i] << " ";
        cout << endl;
        delete[] Hop;
        delete[] Giao;
    }
}

int main(){
    run();
    return 0;
}