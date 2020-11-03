//program 6.1.1.cpp ��̬�Ĺ���
	#include <iostream>
	using namespace std;
	class A
	{
		public:  	
		virtual void Print() { cout << "A::Print"<<endl ; }
	};
	class B: public A
	{
		public:  	
		virtual void Print() { cout << "B::Print" <<endl; }
	};
	class D: public A
	{	
		public:
		virtual void Print() { cout << "D::Print" << endl ; }
	};
	class E: public B
	{
		virtual void Print() { cout << "E::Print" << endl ; }
	};
	int main()
	{
		A  a; B b; D d; E e;
		A *pa = &a;  B *pb = &b;
		pa->Print();    //��̬�� a.Print()�����ã������A::Print
		pa = pb;        //����ָ��paָ�����������b
		pa -> Print();  //b.Print()�����ã������B::Print
		pa = & d;       //����ָ��paָ�����������d
		pa -> Print();  //��̬�� d. Print ()������,�����D::Print
		pa = & e;       //����ָ��paָ�����������d
		pa -> Print();  //��̬�� e.Print () ������,�����E::Print
		return 0;
	}
