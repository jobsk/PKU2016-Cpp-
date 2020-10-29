//program 5.5.cpp 多层次派生情况下的构造函数和析构函数
	#include <iostream>
	using namespace std;
	class A {
		public:
			int n;
			A(int i):n(i)  {cout << "A " << n << " constructed" << endl;}
			~A() {	cout << "A " << n << " destructed" << endl;	}
	};
	class B:public A
	{
		public:
			B(int i):A(i) {cout << "B constructed" << endl;}
			~B() {	cout << "B destructed" << endl;	}
	
	};
	class C:public B {
	public:
		C():B(2) {cout << "B constructed" << endl;	}
		~C() {	cout << "B destructed" << endl;	}
	};
	int main()
	{
		C Obj;
		return 0;
	}
