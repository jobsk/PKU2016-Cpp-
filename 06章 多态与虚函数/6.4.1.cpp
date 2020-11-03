//program 6.4.1.cpp 成员函数中调用虚函数
	#include <iostream>
	using namespace std;
	class CBase
	{
	public:
		void func1()
		{
			func2();
		}
		virtual void func2()  {cout << "CBase::func2()" << endl;}
	};
	class CDerived:public CBase
	{
	public:
		virtual void func2() { cout << "CDerived:func2()" << endl; }
	};
	int main()
	{
		CDerived d;
		d.func1();
		return 0;
	}
