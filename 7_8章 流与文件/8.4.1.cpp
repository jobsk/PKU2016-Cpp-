//program 8.4.1.cpp  ��д�ı��ļ�
	#include <iostream>
	#include <fstream>
	#include <cstdlib> //qsort�ڴ�ͷ�ļ�������
	using namespace std;
	const int MAX_NUM = 1000;
	int a[MAX_NUM]; //����ļ��ж��������
	int MyCompare(const void * e1, const void * e2)
	{ //����qsort�ıȽϺ���
	 	return *((int *)e1) - *((int *)e2);
	}
	int main()
	{
		int total = 0;//�������������
		ifstream srcFile("in.txt",ios::in); //���ı�ģʽ��in.txt����
		if(!srcFile) { //��ʧ��
			cout << "error opening source file." << endl;
			return 0;
		}
		ofstream destFile("out.txt",ios::out); //���ı�ģʽ��out.txt��д
		if(!destFile) {
			srcFile.close(); //�������ǰ�������ǹر���ǰ�򿪹����ļ�
			cout << "error opening destination file." << endl;
			return 0;
		}
		int x;	
		while(srcFile >> x) //��������cin������ifstream����
			a[total++] = x;
		qsort(a,total,sizeof(int),MyCompare); //����
		for(int i = 0;i < total; ++i)
			destFile << a[i] << " "; //��������cout������ofstream����
		destFile.close();
		srcFile.close();
		return 0;
	}
