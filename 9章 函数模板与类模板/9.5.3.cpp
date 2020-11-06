//program 9.5.3.cpp  类也可以将函数模板声明为友元
	#include <iostream>
	using namespace std;
	class A
	{
		int v;
	public:
		A(int n):v(n) { }
		template <class T>
		friend void Print(const T & p);
	};
	template <class T>
	void Print(const T & p)
	{
		cout << p.v;
	}
	int main()
	{
		A a(4);
		Print(a);
		return 0;
	}
