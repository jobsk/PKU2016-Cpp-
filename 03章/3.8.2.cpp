//program 3.8.2.cpp 友元类
	class CCar
	{
	 	  private:
			int price;
	      	friend class CDriver; //声明CDriver为友元类
	};
	class CDriver
	{
	 	public:
	       CCar myCar;
		   void ModifyCar()  //改装汽车
		   {
		   	 myCar.price += 1000;//因CDriver是CCar的友元类，故此处可以访问其私有成员
		   }
	};
	int main()
	{
		 return 0;
	}
