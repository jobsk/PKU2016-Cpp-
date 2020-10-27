//program 1.6.3.cpp  参数传值
	#include <iostream>
	using namespace std;
	void Swap(int a,int b)
	{
	 	 int tmp;
	     //以下三行将a,b值互换
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
