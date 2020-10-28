//program 3.4.cpp  静态成员
	#include <iostream>
	using namespace std;
	class CRectangle
	{
		private:
	   		int w, h;
		     static int totalArea;  //矩形总面积
	   		static int totalNumber; //矩形总数
		public:
		     CRectangle(int w_,int h_);
	   		 ~CRectangle();
		     static void PrintTotal();
	};
	CRectangle::CRectangle(int w_,int h_)
	{
	    w = w_;  h = h_;
	    totalNumber ++;        //有对象生成则增加总数
	    totalArea += w * h;    //有对象生成则增加总面积
	}
	CRectangle::~CRectangle()
	{
	    totalNumber --;      //有对象消亡则减少总数
	    totalArea -= w * h;  //有对象消亡则减少总面积
	}
	void CRectangle::PrintTotal()
	{
	    cout << totalNumber << "," <<  totalArea << endl;
	}
	int CRectangle::totalNumber = 0;
	int CRectangle::totalArea = 0;
	// 必须在定义类的文件中对静态成员变量进行一次声明
	//或初始化。否则编译能通过，链接不能通过。
	int main()
	{
		CRectangle r1(3,3), r2(2,2);
	   //cout << CRectangle::totalNumber; // 错误, totalNumber是私有的
		CRectangle::PrintTotal();
		r1.PrintTotal();
		return 0;
	}
