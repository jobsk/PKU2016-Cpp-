//program 1.6.1.cpp  ���õ�ʾ������
	#include <iostream>
	using namespace std;
	int main()
	{
		int n = 4;
		int & r = n;        //r������n���Ӵ�r��n��һ����
		r = 4;              //�޸�r�����޸�n
		cout << r << endl;  //���4
		cout << n << endl;  //���4
		n = 5;              //�޸�n�����޸�r
		cout << r << endl;  //��� 5
		int & r2 = r;         //r2��r����ͬһ������,����n
		cout << r2 << endl; //��� 5
		return 0;
	}
