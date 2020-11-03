//program 6.2.2.cpp  �����������
	#include <iostream>
	#include <cmath>
	using namespace std;
	class CShape  //���ࣺ������
	{
		public:
			virtual double Area() { };  //�����
			virtual void PrintInfo() { }; //��ʾ��Ϣ
	};
	class CRectangle:public CShape  //�����ࣺ������
	{
		public:
			int w,h;     //��͸�
			virtual double Area();
			virtual void PrintInfo();
	};
	class CCircle:public CShape  //�����ࣺԲ��
	{
		public:
			int r;      //�뾶
			virtual double Area();
			virtual void PrintInfo();
	};
	class CTriangle:public CShape //�����ࣺ��������
	{
		public:
			int a,b,c;      //���߳�
			virtual double Area();
			virtual void PrintInfo();
	};
	double CRectangle::Area()  {
		return w * h;
	}
	void CRectangle::PrintInfo()  {
		cout << "Rectangle:" << Area() << endl;
	}
	double CCircle::Area()  {
		return 3.14 * r * r ;
	}
	void CCircle::PrintInfo()  {
		cout << "Circle:" << Area() << endl;
	}
	double CTriangle::Area()  {   //���ݺ��׹�ʽ�������������
		double p = ( a + b + c) / 2.0;
		return sqrt(p * ( p - a)*(p- b)*(p - c));
	}
	void CTriangle::PrintInfo()  {
		cout << "Triangle:" << Area() << endl;
	}
	CShape *pShapes[100]; //������Ÿ��ּ������壬���費����100��
	int MyCompare(const void *s1, const void *s2)  //�����������ĺ���
	{
		CShape **p1 = (CShape **)s1; //s1��ָ��ָ���ָ��,��ָ���ָ��ΪCShape* ����
		CShape **p2 = ( CShape **)s2;
		double a1 = (*p1)->Area(); //p1ָ�򼸺���������ָ��, *p1��ָ�򼸺��������
		double a2 = (*p2)->Area();
		if( a1 < a2 )
			return -1;   //���С����ǰ��
		else if (a2 < a1)
			return 1;
		else
			return 0;
	}
	int main()
	{
		int i; int n;
		CRectangle *pr; CCircle *pc; CTriangle *pt;
		cin >> n;
		for( i = 0;i < n;++i ) {
			char c;
			cin >> c;
			switch(c) {
				case 'R': //����
				pr = new CRectangle();
				cin >> pr->w >> pr->h;
				pShapes[i] = pr;
				break;
	 			case 'C': //Բ
				pc  = new CCircle();
				cin >> pc->r;
				pShapes[i] = pc;
				break;
				case 'T': //������
				pt = new CTriangle();
				cin >> pt->a >> pt->b >> pt->c;
				pShapes[i] = pt;
				break;
			}
		}
		qsort(pShapes,n,sizeof(Cshape *),MyCompare);
		for(i = 0;i <n;++i) {
			pShapes[i]->PrintInfo();
			delete pShapes[i]; //�ͷſռ�
		}
		return 0;
	}
