//program 3.1.3.3.cpp  复制构造函数用于函数形参
	#include <iostream>
	using namespace std;
	class A
	{
	   public:
	   A() { };
	   A( A & a) {
	   	  cout << "Copy constructor called" <<endl;
	   }		
	};
	void Func(A a)
	{
	}
	int main(){
		A a;
		Func(a);
		return 0;
	}
