//program 7.5.2.1.cpp  cin.getline�÷�
	#include <iostream>
	using namespace std;
	int main()
	{
		char szBuf[20];
		int n = 120;
		if(!cin.getline(szBuf,6))  //�����������һ���ַ�����5�����ͻ����
			cout << "error" << endl;
		cout << szBuf << endl;
		cin >> n;	
		cout << n  << endl;;
		cin.clear(); //clear�ܹ����cin�ڲ��Ĵ����ǣ�ʹ֮�ָ�����
		cin >> n;
		cout << n << endl;
		return 0;
	}
