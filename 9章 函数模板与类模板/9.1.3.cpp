//program 9.1.3.cpp  求数组最大元素的MaxElement函数模板
	#include <iostream>
	using namespace std;
	template <class T>
	T MaxElement(T a[], int size) //size是数组元素个数
	{
		T tmpMax = a[0];
		for(int i = 1;i < size;++i)
			if(tmpMax < a[i])
				tmpMax = a[i];
		return tmpMax;
	}
	class CFraction //分数类
	{
		int numerator;   //分子
		int denominator; //分母
	public:
		CFraction(int n,int d):numerator(n),denominator(d) { };
		bool operator <(const CFraction & f) const
		{//为避免除法产生的浮点误差，用乘法判断两个分数的大小关系
			if(denominator * f.denominator > 0)
				return numerator * f.denominator < denominator * f.numerator ;
			else
				return numerator * f.denominator > denominator * f.numerator ;
		}
		bool operator == (const CFraction & f) const
		{//为避免除法产生的浮点误差，用乘法判断两个分数是否相等
			return numerator * f.denominator == denominator * f.numerator;
		}
		friend ostream & operator <<(ostream & o,const CFraction & f);
	};
	ostream & operator <<(ostream & o,const CFraction & f)
	{//重载 << 使得分数对象可以通过cout输出
		o << f.numerator << "/" << f.denominator; //输出"分子/分母" 形式
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
