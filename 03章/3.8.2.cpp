//program 3.8.2.cpp ��Ԫ��
	class CCar
	{
	 	  private:
			int price;
	      	friend class CDriver; //����CDriverΪ��Ԫ��
	};
	class CDriver
	{
	 	public:
	       CCar myCar;
		   void ModifyCar()  //��װ����
		   {
		   	 myCar.price += 1000;//��CDriver��CCar����Ԫ�࣬�ʴ˴����Է�����˽�г�Ա
		   }
	};
	int main()
	{
		 return 0;
	}
