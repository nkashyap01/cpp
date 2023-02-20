 
 #include <iostream>

using namespace std;
class retail
{
    public:
    int s,p,t,sw,h,b;
    
    public:
    retail()
    {
        s=40;
        p=50;
        t=35;
        sw=40;
        h=20;
        b=30;

    }

    friend void shirt(retail);
    friend void pants(retail);
    friend void tshirts(retail);
    friend void sweatears(retail);
    friend void hats(retail);
    friend void bags(retail);
    
     };   
    
    void shirt( retail s1)
    {
        cout<<"total sold percentage of shirt is"<<(29*100/s1.s);
    }
     void pant( retail p1)
    {
        cout<<"total sold percentage of pant is"<<(45*100)/p1.p;
    }
     void tshirts( retail t1)
    {
        cout<<"total sold percentage of tshirts is"<<(34*100)/t1.t;
    }

     void hats( retail h1)
    {
        cout<<"total percentage sold is"<<(19*100)/h1.h;
    }
     void bags( retail b1)
    {
        cout<<"total percentage sold is"<<(29*100)/b1.b;
    }
    
    

int main()
{
    
    retail r;
   
   shirt(r);
   pants(r);
   tshirts(r);
   hats(r);
   bags(r);
   
    return 0;
}

