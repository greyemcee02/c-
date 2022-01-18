#include<bits/stdc++.h>

using namespace std;

class Obj{
	
	private:
		
		int soluong;
	public:
		
//		void setsl( int sl){
//			soluong = sl;
//		}
		friend class Obj;
};

class Obj2{
	
	public:
		int getsl(Obj st){
			return st.soluong;
		}
};

int main(){
	
	return 0;
}
