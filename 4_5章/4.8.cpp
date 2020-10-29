//program 4.8.cpp, ���� ++ �� --
	#include <iostream>
	using namespace std;
	class CDemo {
		private:
			int n;
		public:
			CDemo(int i=0):n(i) { }
			CDemo & operator++();      //����ǰ����ʽ
			CDemo operator++( int );   //���ں�����ʽ
			operator int ( ) { return n; }
			friend CDemo & operator--(CDemo & );
			friend CDemo operator--(CDemo & ,int);
	};
	CDemo & CDemo::operator++()
	{//ǰ�� ++
		n ++;
		return * this;
	}
	CDemo CDemo::operator++(int k )
	{ //���� ++
		CDemo tmp(*this); //��¼�޸�ǰ�Ķ���
		n++;
		return tmp; //�����޸�ǰ�Ķ���
	}
	CDemo & operator--(CDemo & d)
	{//ǰ��--
		d.n--;
		return d; 	
	}
	CDemo operator--(CDemo & d,int)
	{//����--
		CDemo tmp(d);
		d.n --;
		return tmp;
	}
	int main()
	{
		CDemo d(5);
		cout << (d++ ) << ",";  //�ȼ��� d.operator++(0);
		cout << d << ",";
		cout << (++d) << ",";   //�ȼ��� d.operator++();
		cout << d << endl;
		cout << (d-- ) << ",";  //�ȼ��� operator-(d,0);
		cout << d << ",";
		cout << (--d) << ",";   //�ȼ��� operator-(d);
		cout << d << endl;
		return 0;
	}
