//program 7.5.2.cpp  cin.peek�÷�ʾ��
	#include <iostream>
	#include <iomanip>
	#include <string>
	using namespace std;
	string Months[12] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug",
		   			  	  "Sep","Oct","Nov","Dec" };
	int main()
	{
		int c;
		while((c = cin.peek()) != EOF) { //ȡ�������еĵ�һ���ַ����в鿴
		 	int year,month,day;
		 	if(c >= 'A' && c <= 'Z') { //�������ڸ�ʽ
				string sMonth;
				cin >> sMonth >> day >> year;
				for(int i = 0;i < 12; ++i)  //�����·�
			  	 	if(sMonth == Months[i]) {
						month = i + 1;
						break;
					}
			}
			else { //�й����ڸ�ʽ
				cin >> year ;
				cin.ignore() >> month ; //��ignore���� "2011.12.3"�е�'.'
				cin.ignore() >> day;
			}
			cin.ignore();   //������ĩ '\n'
			cout<< setfill('0') << setw(2) << month ;//��������ַ�'\0'��������2
			cout << "-" << setw(2) << day << "-" << setw(4) << year << endl;
		}
		return 0;
	}
