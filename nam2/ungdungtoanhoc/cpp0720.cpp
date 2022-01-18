#include<iostream>

using namespace std;

int solve(int *Arr, int *thuan, int *nghich, int n){
    thuan[0]=1;
    for(int i=1;i<n;i++){
        thuan[i]=1;
        for(int j=0;j<i;j++){
            if(Arr[i]>Arr[j]) 
            thuan[i]=(thuan[i]<thuan[j]+1)?thuan[j]+1:thuan[i];
        }
    }
    nghich[n-1]=1;
    int max=thuan[n-1];
    for(int i=n-2;i>=0;i--){
        nghich[i]=1;
        for(int j=n-1;j>i;j--){
            if(Arr[j]<Arr[i])
            nghich[i]=(nghich[i]<nghich[j]+1)?nghich[j]+1:nghich[i];
        }
        max=(max<thuan[i]+nghich[i]-1)?thuan[i]+nghich[i]-1:max;
    }
    return max;
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int *Arr = new int [n], *thuan = new int[n], *nghich = new int[n];
        fill(thuan,thuan+n,0);
        fill(nghich,nghich+n,0);
        for(int i=0;i<n;i++) cin >> Arr[i];
        cout << solve(Arr,thuan,nghich,n) << endl;
        delete[] Arr;
        delete[] thuan;
        delete[] nghich;
    }
    return 0;
}