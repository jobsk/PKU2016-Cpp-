//program 3.1.3.1.cpp  ���ƹ��캯��
	#include <iostream>
	using namespace std;
	class Complex
	{
	 public:
		 double real,imag;
	      Complex(double r,double i) {
			 real = r; imag = i;			
		  }
	};
	int main(){
		Complex c1(1,2);
		Complex c2(c1); //�ø��ƹ��캯����ʼ��c2
		cout << c2.real << "," << c2.imag ;  //��� 1,2
		return 0;
	}
