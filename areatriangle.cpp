#include<iostream> 
using namespace std; 
const float pi=3.14;
float area(float n,float b,float h)
{
float ar; ar=n*b*h; return ar;
}
float area(float r)
{
float ar; ar=pi*r*r; return ar;
}
float area(float l,float b)
{
float ar; ar=l*b; return ar;
}
int main()
{
float b,h,r,l; float answer;

cout<<"Enter the value of base & Hieght of Triangle: \n"; std::cin>>b>>h;
answer=area(0.5,b,h);
cout<<"Area of Triangle: "<<answer<<endl; cout<<"Enter the Radius of Circle: "; std::cin>>r;
answer=area(r);
cout<<"Area of Circle: "<<answer<<endl; cout<<"Enter the Length & Bredth of Rectangle: \n";
cin>>l>>b; answer=area(l,b);
 
cout<<"Area of Rectangle: "<<answer<<endl; return 0;
}
