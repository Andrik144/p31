#include<iostream>
using namespace std;
	class MyClass
	{
	private:
		int a;
		double height;
	public:	
		MyClass() : a(0), height(0)
		{
			cout<<"const\n";
		}
		void set_a( int num );
		int get_a();
		void set_height( double h ){height = h;}
		double get_height(){return height;}
		~MyClass()
		{
			cout<<"destruct\n";
		}
	};
void MyClass::set_a( int num )
{
	a = num;	
}	
int MyClass::get_a()
{
	return a;
}
int main()
{
	MyClass object;
	MyClass object2;
	MyClass object3;
	
	object.set_a(101);
	object.set_height(175.5);
	
	cout<<object.get_a()<<"\t";
	cout<<object.get_height()<<endl;
	
	object2 = object;
	
	cout<<object2.get_a()<<"\t";
	cout<<object2.get_height()<<endl;
	
	cout<<object3.get_a()<<"\t";
	cout<<object3.get_height()<<endl;
	return 0;
}
