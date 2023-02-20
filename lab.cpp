
#include<iostream>
using namespace std;

class retailer {

string products[6]{"shirts","pants","T-shirt","sweaters","hats","bags"};
int purchase_sale[6];
int percentage_sold[6];
int total_purchase=0;
int total_percentage=0;
public:
retailer (){
for(int i=0;i<6;i++){
cout<<"enter purchase sale for "<<products[i]<<" : ";
cin>>purchase_sale[i];
cout<<"enter percentage sale for "<<products[i]<<" : ";
cin>>percentage_sold[i];
}
}

friend void cal_percentage(retailer);


};


void cal_percentage(retailer t){

cout<<endl<<endl<<"-----------------------------------------"<<endl;

for(int i=0;i<6;i++){
cout<<"percentage sale for "<<t.products[i]<<" is "<<(t.percentage_sold[i]*100.0)/t.purchase_sale[i]<<"%"<<endl;
t.total_purchase+=t.purchase_sale[i];
t.total_percentage+=t.percentage_sold[i];
}
cout<<endl<<endl<<"----------------------------------"<<endl;

cout<<"total percentage is "<<(t.total_percentage*100.0)/t.total_purchase<<"%"<<endl;
}


int main(){

retailer r1;
cal_percentage(r1);


return 0;
}
 
