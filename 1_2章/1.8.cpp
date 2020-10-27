//program 1.8.cpp  函数重载
	#include <iostream>
	using namespace std;
	int Max(int a,int b)
	{
	    cout << "Max 1" << endl; 	
	}
	double Max(double a,double b)
	{
	    cout << "Max 2" << endl;
	}
	double Max(double a,double b,double c)
	{
	    cout << "Max 3" << endl;
	}
	int main()
	{
	 	Max(3,4);  //调用int Max(int,int)
	 	Max(2.4,6.0); //调用double Max(double,double)
	 	Max(1.2,3.4,5); //调用 double Max(double,double,double)
	 	Max(1,2,3); //调用double Max(double,double)
	     Max(3,1.5); //编译出错：二义性
	 	return 0;
	}
