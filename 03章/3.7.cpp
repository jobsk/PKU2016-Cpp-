//program 3.7.cpp const��Ա�����ó�Ա
	#include <iostream>
	using namespace std;
	int f;
	class CDemo {
		private :
			const int num; //�����ͳ�Ա����
			int & ref;     //�����ͳ�Ա����
			int value;
		public:
			CDemo( int n):num(n),ref(f),value(4)
			{	
			}	
	};
	int main(){
		cout << sizeof(CDemo) << endl;
		return 0;
	}
