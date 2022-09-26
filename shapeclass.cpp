
#include<iostream> 
using namespace std; 
class shape
{
public:
int l,b,r; float p; shape()
{}
shape(float l,float b)
{
p=2*(l+b);
cout<<"\n"<<"perimeter of rectangle:"<<p;

}
shape(float r)
{
p=2*3.14*r;
cout<<"\n"<<"perimeter of circle:"<<p<<endl;
}
~shape(){
 
cout<<"\ninvoking destructor"<<endl;

}
};
int main()
{
int length,breadth,radius; shape b1,b2;
cout<<"\n"<<"finding perimeter of rectangle.."; 
cout<<"\n"<<"enter the value of length and breadth"; 
cin>>length>>breadth;
b1=shape(length,breadth);
cout<<"\n"<<"finding perimeter of circle..";
cout<<"\n"<<"enter the value of radius:";
cin>>radius; b2=shape(radius);
return 0;

}
