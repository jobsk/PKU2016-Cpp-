//program 5.8.cpp �����������ָ�뻥��ת��
	#include <iostream>
	using namespace std;
	class CBase
	{
		protected:	
			int n;
		public:
			CBase(int i):n(i)  { }
			void Print() { cout << "CBase:n=" << n << endl; }
	};
	class CDerived:public CBase
	{
		public:
			int v;
			CDerived(int i):CBase(i),v(2 * i) { }
			void Func() { } ;
			void Print()
			{
				cout << "CDerived:n=" << n << endl;
				cout << "CDerived:v=" << v << endl;
			}
	};
	int main()
	{  	
			CDerived objDerived(3);
			CBase objBase(5);
			CBase * pBase = & objDerived ; // ʹ�û���ָ��ָ�����������
			//pBase->Func(); //��, CBase��û��Func()��Ա����
			//pBase->v = 5;  //�� CBase��û��v��Ա����
			pBase->Print();
			cout << "1)------------" <<endl;
			//CDerived * pDerived = & objBase; //�����ܽ�����ָ�븳ֵ��������ָ��
			CDerived * pDerived = (CDerived *)(& objBase);
			pDerived->Print();  //���ã����ܳ��ֲ���Ԥ�ڵĴ���
			cout << "2)------------" <<endl;		
			objDerived.Print();
			cout << "3)------------" <<endl;				
			pDerived->v = 128;  //�����˵Ŀռ���д�����ݣ���������
			objDerived.Print();
			return 0;
	}
