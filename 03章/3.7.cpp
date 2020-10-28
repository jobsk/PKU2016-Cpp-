//program 3.7.cpp const成员和引用成员
	#include <iostream>
	using namespace std;
	int f;
	class CDemo {
		private :
			const int num; //常量型成员变量
			int & ref;     //引用型成员变量
			int value;
		public:
			CDemo( int n):num(n),ref(f),value(4)
			{	
			}	
	};
	int main(){
		cout << sizeof(CDemo) << endl;
		return 0;
	}
