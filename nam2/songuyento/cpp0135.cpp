#include<iostream>
#include<math.h>
using namespace std;
 
int dd[1001], n=0;
 
void sangnt(){
    int arr[1005001]={};
    for(int i=0;i<1005000;i++) arr[i]=1;
    arr[0]=0;
    arr[1]=0;
    for(int i=2;i<=sqrt(1005000);i++){
        if(arr[i]){
            dd[n++]=i*i;
            for(int j=i*i; j < 1005000; j+=i)
                arr[j]=0;
        }
    }
}
 
void run(){
    sangnt();
    int t, m;
    cin >> t;
    while(t--){
        cin >> m;
        int i=0;
        while(dd[i]<=m&&i<n) cout << dd[i++] << " ";
        cout << endl;
    }
}
 
int main(){
    run();
    return 0;
}