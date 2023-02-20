#include<iostream>
using namespace std;

class Base
{
	int a;
	public:
		int b;
		void get_ab()
		{
			a=5;
			b=10;
		}
		void get_a()
		{
			return a;
		}
		void show_a()
		{
			cout<<"\na="<<a;
		}
};
class derived:public Base
{
	int c;
	public:
		void multi()
		{
			c=b*get_a();
		}
		void display()
		{
			cout<<"\na="<<get_a();
			cout<<"\nb="<<b;
			cout<<"\nc="<<c;
		}
};
int main()
{ 
derived d;
d.get_ab();
d.multi();
d.show_a();
d.display();
d.b=20;
d.multi();
d.display();
return 0;

}
