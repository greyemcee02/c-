#include<iostream>
#include<string>
using namespace std;

void run(){
    // int t;
    // cin >> t;
    // while(t--){
        int n, *dd ,dem=0;
        cin >> n;
        cin.ignore();
        string  str[n];
        dd=new int [n];
        fill(dd,dd+n,0);
        for(int i=0;i<n;i++){
            getline(cin,str[i]);
        }
        for(int i=0;i<n;i++){
            if(dd[i]==0){
                dem++;
                for(int j=i+1;j<n;j++)
                if(str[i]==str[j]) dd[j]=-1;
            }
        }
        cout << dem ;
        delete[] dd;
   // } 
    
}

int main(){
    run();
    return 0;
}