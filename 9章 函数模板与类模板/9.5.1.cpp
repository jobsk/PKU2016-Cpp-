//program 9.5.1.cpp�������ࡢ��ĳ�Ա������Ϊ��ģ�����Ԫ
	void Func1() {  }
	class A {  };
	class B
	{
	public:
		void Func() { }
	};
	template <class T>
	class Tmpl
	{
		friend void Func1();
		friend class A;
		friend void B::Func();
	};
	int main()
	{
		Tmpl<int> i;
		Tmpl<double> f;
		return 0;
	}
