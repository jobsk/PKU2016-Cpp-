//program 8.4.3.cpp ���ļ��н����۰����
	#include <iostream>
	#include <fstream>
	#include <cstring>
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
		fstream ioFile("students.dat", ios::in|ios::out);//�üȶ���д�ķ�ʽ��
		if(!ioFile) {
			cout << "error" ;
			return 0;
		}
		ioFile.seekg(0,ios::end); //��λ��ָ�뵽�ļ�β����
	                              //�Ա����Ժ�tellg ��ȡ�ļ�����
		int L = 0,R; // L���۰���ҷ�Χ�ڵ�һ����¼�����
	                  // R���۰���ҷ�Χ�����һ����¼�����
		R = ioFile.tellg() / sizeof(CStudent) - 1;
	    //�״β��ҷ�Χ�����һ����¼����ž���: ��¼����- 1
		do {
			int mid = (L + R)/2; //Ҫ�ò��ҷ�Χ���еļ�¼�ʹ����ҵ����ֱȶ�
			ioFile.seekg(mid *sizeof(CStudent),ios::beg); //��λ�����еļ�¼
			ioFile.read((char *)&s, sizeof(s));
			int tmp = strcmp( s.szName,"Jack");
			if(tmp == 0) { //�ҵ���
				s.age = 20;
				ioFile.seekp(mid*sizeof(CStudent),ios::beg);
				ioFile.write((char*)&s, sizeof(s));
				break;
			}
			else if (tmp > 0) //������ǰһ�����
				R = mid - 1 ;
			else  //��������һ�����
				L = mid + 1;
		}while(L <= R);
		ioFile.close();
		return 0;
	}
