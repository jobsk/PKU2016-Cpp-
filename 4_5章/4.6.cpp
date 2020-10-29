//program 4.6.cpp  ���� << �� >>
	#include <iostream>
	#include <string>
	#include <cstdlib>
	using namespace std;
	class Complex
	{
		double real,imag;	
	public:
		Complex( double r=0, double i=0):real(r),imag(i){ };
		friend ostream & operator<<( ostream & os,const Complex & c);
		friend istream & operator>>( istream & is,Complex & c);
	};
	ostream & operator<<( ostream & os,const Complex & c)
	{
		os << c.real << "+" << c.imag << "i"; //��"a+bi"����ʽ���
		return os;
	}
	istream & operator>>( istream & is,Complex & c)
	{
		string s;
		is >> s;  //��"a+bi"��Ϊ�ַ�������, "a+bi" �м䲻���пո�
		int pos = s.find("+",0);
		string sTmp = s.substr(0,pos); //���������ʵ�����ַ���
		c.real = atof(sTmp.c_str());//atof�⺯���ܽ�const char*ָ��ָ�������ת���� float
		sTmp = s.substr(pos+1, s.length()-pos-2);   //����������鲿���ַ���
		c.imag = atof(sTmp.c_str());
		return is;
	}
	int main()
	{
		Complex c;
		int n;
		cin >> c >> n;
		cout << c << "," << n;
		return 0;
	}
