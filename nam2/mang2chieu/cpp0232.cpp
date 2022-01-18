#include<iostream>

using namespace std;

void tongcot(int **arr, int n, int *sumc){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum += arr[j][i];
        }
        sumc[sum]++;
    }
}

int kq(int *sumh, int *sumc, int n){
    int maxh=0, maxc=0, h=n-1, c=n-1;
    while(sumh[h]<2){
        h--;
        maxh=(maxh<sumh[h]*h);
    }
}

int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int **arr = new int *[n], *sumh = new int [16] ,
         *sumc = new int[16];
         fill(sumh,sumh+16,0);
         fill(sumc,sumc+16,0);
        for(int i=0;i<n;i++){
            arr[i] = new int [m];
            int sum=0;
            for(int j=0;j<m;j++){
                cin >> arr[i][j];
                sum += arr[i][j];
            }
            sumh[sum]++;
        }

    }
    return 0;
}