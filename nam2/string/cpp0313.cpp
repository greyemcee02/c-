#include<iostream>
#include<string>
using namespace std;



void run(){
    string  s1, s2;
    getline(cin,s1);
    getline(cin,s2);
    while(s1.find(s2)!=string::npos){
          s1.erase(s1.find(s2),s2.length()+1);
    }
    cout << s1 << endl;
}

int main(){
    run();
    return 0;
}