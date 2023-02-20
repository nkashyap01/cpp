#include<stdio>
using namespace std;
class number
{
	private:
		int x,y;
		public:
			number()
			{
				
			}
			number( int a,int b)
			{
				x=a;
				y=b;

			}
			void add()
			{
				cout<<"The sum of number is"<<x+y;
			}
};
void main()
{
	int a,b;
	cout<<"Enter number";
	cin>>a>>b;
	number n(a,b);
	n.display();
	
}

