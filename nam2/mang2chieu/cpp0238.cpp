#include<iostream>

using namespace std;

int c[4]={0,-1,1,0},
    h[4]={-1,0,0,1};

void set(int **Arr,int a, int b){
    Arr[a][b]=-1;
    for(int i=0;i<4;i++){
        if(Arr[a+h[i]][b+c[i]]==0){
            Arr[a+h[i]][b+c[i]]=-1;
            set(Arr,a+h[i],b+c[i]);
        }
    }
}

void solve(int **Arr, int n, int m){
    for(int i=1;i<=n;i++){
        if(Arr[i][1]==0) set(Arr,i,1);
        if(Arr[i][m]==0) set(Arr,i,m);
    }
    for(int i=1;i<=m;i++){
        if(Arr[1][i]==0) set(Arr,1,i);
        if(Arr[n][i]==0) set(Arr,n,i);
    }
}

void output(int **Arr, int n, int m){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(Arr[i][j]==-1) cout << "O" << " ";
            else cout << "X" << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        char tmp;
        int **Arr = new int *[n+2];
        for(int i=0;i<n+2;i++){
            Arr[i] = new int[m+2];
            fill(Arr[i],Arr[i]+m+2,-1);
        }
        for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin >> tmp ;
				if(tmp=='X') Arr[i][j]=1;
				else Arr[i][j] = 0;
			} 
		}
		solve(Arr,n,m);
        output(Arr,n,m);
        for(int i=0;i<n+2;i++) delete[] Arr[i];
        delete[] Arr;
    }
    return 0;
}