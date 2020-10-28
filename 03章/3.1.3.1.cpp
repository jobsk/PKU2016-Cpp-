//program 3.1.3.1.cpp  复制构造函数
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
		Complex c2(c1); //用复制构造函数初始化c2
		cout << c2.real << "," << c2.imag ;  //输出 1,2
		return 0;
	}
