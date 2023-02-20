#include <iostream>

using namespace std;

 class employee
 {
     int bs,netsal;
     int hra;
     int DA;
     int tax;
     public:
     void getdata()
     {
         cout<<"Enter sallary of an employee";
         cin>>bs;
         cout<<"Enter hra and DA %";
         cin>>hra>>DA;
     }
     void display()
     {
       netsal=bs+(bs*hra/100)+(bs*DA/100);
       cout<<"total salary is"<<netsal;
       if(netsal<500000)
       {
           tax=netsal*0/100;
       }
       
       else if(netsal>500000 && netsal<1000000)
       {
           tax=netsal*5/100;
       }
       else if(netsal>=1000000&&netsal<2000000)
       {
           tax=netsal*10/100;
       }
       else if(netsal>=2000000&&netsal<3000000)
       {
           tax=netsal*20/100;
       }
       else
       {
           tax=netsal*30/100;
       }
       netsal=netsal-tax;
       cout<<"the net sallary afeter tax deduct"<<netsal;
       
     }
     
     
 };
 int main()
 {
     employee e;
     e.getdata();
     e.display();
 }
     
 
