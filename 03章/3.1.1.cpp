//program 3.1.1.cpp
	class Complex {
	private :
	 	double real,imag;
	public:
		
		Complex (double r);
		Complex( double r,double i );
		Complex ( Complex  c1,  Complex  c2);
	};
	Complex::Complex( double r)  //���캯��1
	{
		real = r; imag = 0;
	}
	Complex::Complex( double r,double i)  //���캯��2
	{
		real = r; imag = i;
	}
	Complex::Complex( Complex  c1,  Complex  c2) //���캯��3
	{
		real = c1.real+c2.real;
		imag = c1.imag+c2.imag;
	}
	int main()
	{
	  	Complex c1(3) , c2 (1,2), c3( c1,c2),c4=7;
		return 0;
	}
