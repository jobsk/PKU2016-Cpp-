//program 7.2.cpp ����ض���
	#include <iostream>
	using namespace std;
	int main()
	{
	    int x,y;
	    cin >> x >> y;
	    freopen("test.txt","w",stdout);  //����׼����ض��� test.txt�ļ�
	    if( y == 0 )  //����Ϊ0�����������Ϣ
	    		cerr << "error." << endl;
	    else
		    cout << x /y ;
	 	return 0;
	}
