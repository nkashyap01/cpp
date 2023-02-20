#include <iostream>

using namespace std;


class electricity
{
    float mr,tb;
    public:
    
    void input()
    {
        cout<<"enter total reading";
        cin>>mr;
    }
    void  bill()
    {
    
        if(mr>=100)
        {
        	 
         tb=100*5.95;  
		 mr=mr-100; 
		 tb=tb+(mr*6.95);
        }
        else
        tb=mr*5.95;
        cout<<"total bill is"<<tb;
    }
};
int main()
{
electricity e;
e.input();
e.bill();
return 0;
}


