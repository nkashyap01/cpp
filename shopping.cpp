

#include <iostream>

using namespace std;


class shopping
{
    float pr,tb;
    public:
    
    void mobile()
    {
        cout<<"Enter price of mobile";
        cin>>pr;
        tb=pr-(pr*5/100);
        cout<<"your total bill is"<<tb;
        
        
    }
    void powerbank()
    {
        cout<<"Enter price";
        cin>>pr; 
        tb=pr-(pr*5/100);
        cout<<"your total bill is"<<tb;
    }
    void  mobilepower()
    {
    
      cout<<"Enter price" ; 
      cin>>pr;
      tb=pr-(pr*10/100);
      cout<<"your total bill is"<<tb;
    }
};
int main()
{
   int i,x;
   shopping s;
   cout<<"5% discount only for mobile";
   cout<<"5% discount only for power bank";
   cout<<"5% discount only for both mobile and power bank";
    cout<<"press 1 for mobile\n";
    cout<<"press 2 for power bank\n";
    cout<<"press 3 for mobile with power bank\n";
    cout<<"press 4 for exit";
    for(i=1; ;i++)
    {
        cout<<"Enter your choice\n";
        cin>>x;
    
    switch(x)
    {
        case 1:s.mobile();break;
        case 2:s.powerbank();break;
        case 3:s.mobilepower();break;
        case 4:exit(0);
        default:cout<<"you have entered invalid choice";
    }
    }

 
return 0;
}


