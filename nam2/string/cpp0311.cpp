#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    string s;
    cin.ignore();
    while(t--){
        cin >> s;
        int *A=new int [200];
        fill(A,A+200,0);
        int max=1;
        for(int i=0;i<s.length();i++){
            A[s[i]]++;
            max=(max<A[s[i]])?A[s[i]]:max;
        }
        int kt=s.length()-max;
        if(kt>=max-1) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
