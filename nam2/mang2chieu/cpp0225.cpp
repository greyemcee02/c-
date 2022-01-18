#include<iostream>
#include<algorithm>
using namespace std;

void tongcot(int **arr,int n, int *sumc){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[j][i];
        }
        sumc[i]=sum;
    }
}

void capnhat(int *sum, int n){
    int tmp=sum[0], i=0;
    while(i+1<n && sum[i+1]<tmp){
        sum[i]=sum[i+1];
        i++;
    }
    sum[i]=tmp;
}

int kq(int *sumc, int *sumh, int n){
    int count = 0;
    int max= (sumc[n-1]>sumh[n-1])?sumc[n-1]:sumh[n-1];
    while(sumc[0]<max&&sumh[0]<max){
        sumc[0]++;
        sumh[0]++;
        capnhat(sumc,n);
        capnhat(sumh,n);
        count++;
    }
    return count;
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int **arr = new int *[n];
        int *sumh = new int [n],
        *sumc = new int [n], h=0, c=0;
        
        for(int i=0;i<n;i++){
            arr[i] = new int [n];
            int sum=0;
            for(int j=0;j<n;j++){
                cin >> arr[i][j];
                sum+=arr[i][j];
            }
            sumh[i]=sum;
        }
        tongcot(arr,n,sumc);
        sort(sumh,sumh+n);
        sort(sumc,sumc+n);
        cout << kq(sumc,sumh,n) << endl;
    }
    return 0;
}