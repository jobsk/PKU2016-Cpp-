//program 3.4.cpp  ��̬��Ա
	#include <iostream>
	using namespace std;
	class CRectangle
	{
		private:
	   		int w, h;
		     static int totalArea;  //���������
	   		static int totalNumber; //��������
		public:
		     CRectangle(int w_,int h_);
	   		 ~CRectangle();
		     static void PrintTotal();
	};
	CRectangle::CRectangle(int w_,int h_)
	{
	    w = w_;  h = h_;
	    totalNumber ++;        //�ж�����������������
	    totalArea += w * h;    //�ж������������������
	}
	CRectangle::~CRectangle()
	{
	    totalNumber --;      //�ж����������������
	    totalArea -= w * h;  //�ж�����������������
	}
	void CRectangle::PrintTotal()
	{
	    cout << totalNumber << "," <<  totalArea << endl;
	}
	int CRectangle::totalNumber = 0;
	int CRectangle::totalArea = 0;
	// �����ڶ�������ļ��жԾ�̬��Ա��������һ������
	//���ʼ�������������ͨ�������Ӳ���ͨ����
	int main()
	{
		CRectangle r1(3,3), r2(2,2);
	   //cout << CRectangle::totalNumber; // ����, totalNumber��˽�е�
		CRectangle::PrintTotal();
		r1.PrintTotal();
		return 0;
	}
