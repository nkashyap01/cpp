  /* suppose you are planing to go to park so you are going to check tickets criteria online.
The ticket rates detail have been given
if chilren below 10 are not allowed to swing
if age is b/w 10 to 15 allowed to swing and getting 10% discount
if age is b/w 15 to 20 allowed to swing and getting 5% discount
if age is more than 20 then not eligible for swing and discount
the age of person will run until you enter the age of last family member and then calculate the total charge amount after
entering each person's age . assume price of ticket is 100 rs. each person 
make the above program with template class.*/

#include <iostream>
using namespace std;
template<class t, class t2>
class ticket
{
    t p;
    t price;
    t i;
    t p1;
    t totalprice=0;
    t n;
    t2 age;
    public:
    ticket(t p1,t2 a)
    {
     p=p1;
     age=a;

    }
    void show()
    {
        cout<<"total number of family"<<endl;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cout<<"Enter age of member"<<endl;
            cin>>age;
            if(age<10)
            cout<<"you are not allowed to swing"<<endl;
            else if(age>=10&&age<=15)
            {
cout<<"you are allowed"<<endl;
price=p-(p*10/100);
cout<<"you have to paid"<<price<<endl;

            }
             else if(age>=15&&age<=20)
            {
cout<<"you are allowed"<<endl;
price=p-(p*5/100);
cout<<"you have to paid"<<price<<endl;

            }
             else  
            {
cout<<"you are not allowed"<<endl;

            }
            
          totalprice=totalprice+price;  
          

        }
        cout<<"total price is"<<totalprice;


    }
};
int main()
{
    
    ticket <int,float> t(100,20.30f);
    t.show();
   return 0;
}
