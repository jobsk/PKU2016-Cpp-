//program 9.5.3.cpp  ��Ҳ���Խ�����ģ������Ϊ��Ԫ
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
