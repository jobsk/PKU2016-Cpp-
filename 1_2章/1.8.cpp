//program 1.8.cpp  ��������
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
	 	Max(3,4);  //����int Max(int,int)
	 	Max(2.4,6.0); //����double Max(double,double)
	 	Max(1.2,3.4,5); //���� double Max(double,double,double)
	 	Max(1,2,3); //����double Max(double,double)
	     Max(3,1.5); //�������������
	 	return 0;
	}
