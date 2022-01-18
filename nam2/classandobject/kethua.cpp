#include<bits/stdc++.h>

using namespace std;

class People{
    protected:
        string id, name;
    public:
        void setID(string id){
            this->id = id;
        }
        string getID(){
            return id;
        }
        void say(){
            cout << "I'm people" << endl;
        }
};

class Student : public People{
    private:
        string code, className;
    public:
        
        void say(){
            People::say();
        }
        void registers(){
            cout << "register for : " << id << endl;
        }
    
};

int main(){
    People p1;
    p1.setID("001");
    cout << p1.getID();
    Student st;
    st.setID("0001");
    cout << st.getID() << endl;
    st.registers();
    //p1.say();
    st.say();
    return 0;
}