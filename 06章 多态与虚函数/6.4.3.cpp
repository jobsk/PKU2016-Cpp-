//program 6.4.3.cpp 区分多态和非多态
	#include <iostream>
	using namespace std;
	class A
	{
	public:
		void func1() { cout<<"A::func1"<<endl; };
		virtual void func2() { cout<<"A::func2"<<endl; };
	};
	class B:public A
	{
	public:
		virtual void func1() { cout << "B::func1" << endl;  };
		void func2() { cout << "B::func2" << endl; }  //func2自动成为虚函数
	};
	class C:public B  // C以A为间接基类
	{
	public:
		void func1() { cout << "C::func1" << endl; }; //func1自动成为虚函数
		void func2() { cout << "C::func2" << endl; }; //func2自动成为虚函数
	};
	int main()
	{
		C obj;
		A *pa = &obj;
		B *pb = &obj;
		pa->func2();  //多态
		pa->func1();  //不是多态
		pb->func1();  //多态
		return 0;
	}
