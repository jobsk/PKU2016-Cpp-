//program 8.4.2.2.cpp  ��ȡ������ѧ����¼�ļ�������
	#include <iostream>
	#include <fstream>
	using namespace std;
	class CStudent
	{
		public:
			char szName[20];
			int age;
	};
	int main()
	{
		CStudent s;		
		ifstream inFile("students.dat",ios::in|ios::binary); //�����ƶ���ʽ��
		if(!inFile) {
			cout << "error" <<endl;
			return 0;
		}
		while(inFile.read((char *)&s, sizeof(s))) { //һֱ�����ļ�����
			int readedBytes = inFile.gcount(); //���ղŶ��˶����ֽ�
			cout << s.szName << " " << s.age << endl;	
		}
		inFile.close();
		return 0;
	}
