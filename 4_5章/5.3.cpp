//program 5.3.cpp ������Աʾ��
	class CBase {
		private: int nPrivate;   //˽�г�Ա
		public:  int nPublic;    //���г�Ա
		protected: int nProtected;   // ������Ա
	};
	class CDerived :public CBase
	{
		void AccessBase ()
		{
			nPublic = 1;      // OK
			nPrivate = 1;    // �����ܷ��ʻ���˽�г�Ա
			nProtected = 1;  // OK�����ʴӻ���̳е�protected��Ա
			CBase f;
			f.nProtected = 1; //��f���Ǻ��������õĶ���
		}
	};
	int main()
	{
		CBase b;
		CDerived d;
		int n = b.nProtected ;  //�������������Ա�����ڣ����ܷ��ʻ��ౣ����Ա
		n = d.nPrivate;  		//���˴����ܷ���d��˽�г�Ա
		int m = d.nPublic;      //OK
		return 0;
	}
