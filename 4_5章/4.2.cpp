//program 4.2.cpp  ����"="
	#include <iostream>
	#include <cstring>
	using namespace std;
	class String {
		private:
	        char * str;
		public:
			String ():str(NULL) { }
			const char * c_str() const { return str; };
			String & operator = (const char * s);
			~String( );
	};
	String & String::operator = (const char * s)
	//����"="��ʹ�� obj = "hello"�ܹ�����
	{
			if( str)
				delete [] str;
			if(s) {  //s��ΪNULL�Ż�ִ�п���
				str = new char[strlen(s)+1];
				strcpy( str, s);
			}
			else
				str = NULL;
			return * this;
	}
	String::~String( )
	{
		if( str)
			delete [] str;
	};
	int main()
	{
		String s;
		s = "Good Luck," ; //�ȼ��� s.operator=("Good Luck,");
		cout << s.c_str() << endl;
		// String s2 = "hello!";   //�������Ҫ�ǲ�ע�͵��ͻ����
		s = "Shenzhou 8!"; //�ȼ��� s.operator=("Shenzhou 8!");
		cout << s.c_str() << endl;
		return 0;
	}
