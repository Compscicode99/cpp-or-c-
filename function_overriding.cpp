#include<iostream>
using namespace std;
class base
{
	public:
		void f1()
		{
			cout<<"f1 of base"<<endl;
		}
		void f2()
		{
			cout<<"f2 of base"<<endl;
		}
};
class derived:public base
{
	public:
		void f1()
		{
			cout<<"f1 is derived"<<endl;
		}
};
int main()
{
	derived d;
	d.f1();
	d.f2();
	return 0;
}
