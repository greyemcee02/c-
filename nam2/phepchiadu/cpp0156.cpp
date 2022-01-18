#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long b,p;
        cin >> b >> p;
        long long kq=0;
        for(long long i=1;i<p;i++){
            if((i*i)%p==1){
                long long ls=i+p*(b/p);
                if(ls>b)
                ls-=p;
                kq+=((ls-i)/p+1);
            }
        }
        cout << kq << endl;
    }
    return 0;
}