//program 5.3.cpp 保护成员示例
	class CBase {
		private: int nPrivate;   //私有成员
		public:  int nPublic;    //公有成员
		protected: int nProtected;   // 保护成员
	};
	class CDerived :public CBase
	{
		void AccessBase ()
		{
			nPublic = 1;      // OK
			nPrivate = 1;    // 错，不能访问基类私有成员
			nProtected = 1;  // OK，访问从基类继承的protected成员
			CBase f;
			f.nProtected = 1; //错，f不是函数所作用的对象
		}
	};
	int main()
	{
		CBase b;
		CDerived d;
		int n = b.nProtected ;  //错，不在派生类成员函数内，不能访问基类保护成员
		n = d.nPrivate;  		//错，此处不能访问d的私有成员
		int m = d.nPublic;      //OK
		return 0;
	}
