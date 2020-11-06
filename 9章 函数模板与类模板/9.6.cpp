//program 9.6.cpp 类模板中的静态成员
	#include <iostream>
	using namespace std;
	template <class T>
	class A
	{
	 private:
		static int count;
	public:
		A() { count ++; }
		~A() { count -- ; };
		A(A &) { count ++ ; }	
		static void PrintCount() { cout << count << endl; }
	};
	template<> int A<int>::count = 0;
	template<> int A<double>::count = 0;
	int main()
	{
	 	A<int> ia;
	 	A<double> da;
	 	ia.PrintCount();
	 	da.PrintCount();
		return 0;
	}
