#include <iostream>

using namespace std;

  
  class add
  {
      int a,b;
      public:
      add()
      {
    a=10;
    b=30;
      }
       
      add(add &ad)
      {
          a=ad.a;
          b=ad.b;
      }
      void disp()
      {
           
          cout<<"sum is"<<a+b;
      }
      };
      
  int main()
  {
      add ad1;
      add ad2=ad1;
      ad1.disp();
      ad2.disp();
      return(0);
  }
