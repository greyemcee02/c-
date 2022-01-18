#include<bits/stdc++.h>
using namespace std;
 
 long long p=1000000007;
int nCrModpDP(int n, int r)
{
    int C[r+1];
    memset(C, 0, sizeof(C));
 
    C[0] = 1; 
    for (int i = 1; i <= n; i++)
    {
        
        for (int j = min(i, r); j > 0; j--)
            C[j] = (C[j] + C[j-1])%p;
    }
    return C[r];
}
 
int nCrModpLucas(int n, int r)
{
   if (r==0)
      return 1;
   int ni = n%p, ri = r%p;
 
   return (nCrModpLucas(n/p, r/p) * 
           nCrModpDP(ni, ri)) % p; 
}
 
int main(){
    int t, n, r;
    cin >> t;
    while(t--){
        cin >> n >> r;
        cout << nCrModpLucas(n, r) << endl;
    }
    return 0;
}