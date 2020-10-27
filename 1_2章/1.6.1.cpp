//program 1.6.1.cpp  引用的示例程序
	#include <iostream>
	using namespace std;
	int main()
	{
		int n = 4;
		int & r = n;        //r引用了n，从此r和n是一回事
		r = 4;              //修改r就是修改n
		cout << r << endl;  //输出4
		cout << n << endl;  //输出4
		n = 5;              //修改n就是修改r
		cout << r << endl;  //输出 5
		int & r2 = r;         //r2和r引用同一个变量,就是n
		cout << r2 << endl; //输出 5
		return 0;
	}
