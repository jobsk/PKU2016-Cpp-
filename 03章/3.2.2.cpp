//program 3.2.2.cpp Îö¹¹º¯Êý
	#include <iostream>
	using namespace std;
	class CDemo {
		public:
		~CDemo() { cout << "destructor" << endl; }
	};
	void Func(CDemo obj )
	{
		cout << "func" << endl;
	}
	CDemo d1;
	CDemo Test( )
	{
		cout << "test" << endl;
		return d1;
	}
	int main(){
		CDemo d2;
		Func(d2);
		Test();
		cout << "after test" << endl;
		return 0;
	}
