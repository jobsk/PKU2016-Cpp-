//program 6.4.1.cpp ��Ա�����е����麯��
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
