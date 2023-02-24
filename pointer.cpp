#include<iostream>
using namespace std;
class ptr
{
	public:
		int *a;
		char *c;
};
int main()
{
	int number=30;
	int *p;
	p=&number;
	cout<<"Address of number variable = "<<&number<<endl;
	cout<<"address of p variable = "<<p<<endl;
	cout<<"value of p variable = "<<*p<<endl;
	return 0;
}
