//program 9.2.3.cpp  �ɱ䳤������ģ��
	#include <iostream>
	#include <cstring>
	using namespace std;
	template <class T>
	class CArray
	{
		int size; //����Ԫ�صĸ���
		T *ptr; //ָ��̬���������
	public:
		CArray(int s = 0);  //s��������Ԫ�صĸ���
		CArray(CArray & a);
		~CArray();
		void push_back(const T & v); //����������β�����һ��Ԫ��v
		CArray & operator=(const CArray & a); //������������ĸ�ֵ
		T length() { return size; }
		T & operator[](int i)
		{//����֧�ָ����±��������Ԫ�أ���a[i] = 4;��n = a[i]���������
			return ptr[i];
		}
	};
	template<class T>
	CArray<T>::CArray(int s):size(s)
	{
	 	if(s == 0)
		 	ptr = NULL;
		else	
			ptr = new T[s];
	}
	template<class T>
	CArray<T>::CArray(CArray & a)
	{
		if(!a.ptr) {
			ptr = NULL;
			size = 0;
			return;
		}
		ptr = new T[a.size];
		memcpy(ptr, a.ptr, sizeof(T ) * a.size);
		size = a.size;
	}
	template <class T>
	CArray<T>::~CArray()
	{
	 	if(ptr) delete [] ptr;
	}
	template <class T>
	CArray<T> & CArray<T>::operator=(const CArray & a)
	{ //��ֵ�ŵ�������ʹ"="��߶������ŵ����飬��С�����ݶ����ұߵĶ���һ��
		if(this == & a) //��ֹa=a�����ĸ�ֵ���³���
		return * this;
		if(a.ptr == NULL) {  //���a����������ǿյ�
			if( ptr )
				delete [] ptr;
			ptr = NULL;
			size = 0;
			return * this;
		}
	 	if(size < a.size) { //���ԭ�пռ乻�󣬾Ͳ��÷����µĿռ�
	 		if(ptr)
				delete [] ptr;
			ptr = new T[a.size];
		}
		memcpy(ptr,a.ptr,sizeof(T)*a.size);	
		size = a.size;
	 	return *this;
	}
	template <class T>
	void CArray<T>::push_back(const T & v)
	{  //������β�����һ��Ԫ��
		if(ptr) {
			T *tmpPtr = new T[size+1]; //���·���ռ�
		memcpy(tmpPtr,ptr,sizeof(T)*size); //����ԭ��������
		delete []ptr;
		ptr = tmpPtr;
	}
		else  //���鱾���ǿյ�
			ptr = new T[1];
		ptr[size++] = v; //�����µ�����Ԫ��
	}
	int main()
	{
		CArray<int> a;
		for(int i = 0;i < 5;++i)
			a.push_back(i);
		for(int i = 0; i < a.length(); ++i)
			cout << a[i] << " ";	
		return 0;
	}
