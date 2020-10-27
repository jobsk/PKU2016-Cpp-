//program 2.4.cpp  矩形类
	#include <iostream>
	using namespace std;
	class CRectangle
	{
		public:
			int w, h; //成员变量，宽和高
			void init( int w_,int h_ ); //成员函数，设置宽和高
			int area(); //成员函数， 求面积
			int perimeter(); //成员函数，求周长
	
	}; //必须有分号
	void CRectangle::init( int w_,int h_ )
	{
		w = w_;  h = h_;
	}
	int CRectangle::area()
	{
		return w * h;
	}
	int CRectangle::perimeter()
	{
		return 2 * ( w + h);
	}
	int main( )
	{
		 int w,h;
		 CRectangle  r;  //r是一个对象
		 cin >> w >> h;
		 r.init( w,h);
		 cout << "It's area is " << r.area() << endl;
		 cout << "It's perimeter is " << r. perimeter();
	  	 cout << sizeof(CRectangle) << endl;
		 return 0;
	}
