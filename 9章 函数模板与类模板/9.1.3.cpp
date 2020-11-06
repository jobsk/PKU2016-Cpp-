//program 9.1.3.cpp  ���������Ԫ�ص�MaxElement����ģ��
	#include <iostream>
	using namespace std;
	template <class T>
	T MaxElement(T a[], int size) //size������Ԫ�ظ���
	{
		T tmpMax = a[0];
		for(int i = 1;i < size;++i)
			if(tmpMax < a[i])
				tmpMax = a[i];
		return tmpMax;
	}
	class CFraction //������
	{
		int numerator;   //����
		int denominator; //��ĸ
	public:
		CFraction(int n,int d):numerator(n),denominator(d) { };
		bool operator <(const CFraction & f) const
		{//Ϊ������������ĸ������ó˷��ж����������Ĵ�С��ϵ
			if(denominator * f.denominator > 0)
				return numerator * f.denominator < denominator * f.numerator ;
			else
				return numerator * f.denominator > denominator * f.numerator ;
		}
		bool operator == (const CFraction & f) const
		{//Ϊ������������ĸ������ó˷��ж����������Ƿ����
			return numerator * f.denominator == denominator * f.numerator;
		}
		friend ostream & operator <<(ostream & o,const CFraction & f);
	};
	ostream & operator <<(ostream & o,const CFraction & f)
	{//���� << ʹ�÷����������ͨ��cout���
		o << f.numerator << "/" << f.denominator; //���"����/��ĸ" ��ʽ
		return o;
	}
	int main()
	{
		int a[5] = { 1,5,2,3,4 };
		CFraction f[4] = {CFraction(8,6),CFraction(-8,4),
						   CFraction(3,2), CFraction( 5,6)};
		cout << MaxElement(a,5) << endl;
		cout << MaxElement(f,4) << endl;
		return 0;
	}
