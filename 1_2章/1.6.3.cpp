//program 1.6.3.cpp  ������ֵ
	#include <iostream>
	using namespace std;
	void Swap(int a,int b)
	{
	 	 int tmp;
	     //�������н�a,bֵ����
	 	 tmp = a ;
	 	 a = b;
	 	 b = tmp;
	 	 cout << "In Swap: a=" << a << " b=" << b << endl;
	}
	int main()
	{
	 	int a = 4, b = 5;
	 	Swap(a,b);
	     cout << "After swaping: a=" << a << " b=" << b;
		return 0;
	}
