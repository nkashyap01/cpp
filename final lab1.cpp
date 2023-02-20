
#include <iostream>
using namespace std;

class product
{
float c, d, percentage;

public:
friend product takePercentage(product o1);
void takeValue(int d1, int d2)
{
c = d1;
d = d2;
percentage = (d / c) * 100;
}

void displayPercentage()
{
cout << "The percentage of the given product is " << percentage << " % " << endl;
}
};

product takePercentage(product o1)
{
product o3;
o3.takeValue(o1.c, o1.d);
return o3;
// cout<<"The percentage sold is " << o3.takeValue();
}

int main()
{
product o1, o2, o3, o4, o5, o6, ans;
// o1 is for shirts
o1.takeValue(40, 29);

// o2 is for pants
o2.takeValue(50, 45);

// o3 is for tshirts
o3.takeValue(35, 34);

// o4 is for sweaters
o4.takeValue(40, 23);

// o5 is for Hats
o5.takeValue(20, 19);

// o6 is for bags
o6.takeValue(30, 19);

ans = takePercentage(o1);
ans.displayPercentage();

ans = takePercentage(o2);
ans.displayPercentage();

ans = takePercentage(o3);
ans.displayPercentage();

ans = takePercentage(o4);
ans.displayPercentage();

ans = takePercentage(o5);
ans.displayPercentage();

ans = takePercentage(o6);
ans.displayPercentage();

return 0;
}



