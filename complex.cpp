#include <iostream> 
using namespace std; 
class complex{
int real,imaginary; 
public:
complex(int a,int i)
{ real=a; imaginary=i;} 
void operator ++(){
++real; }
void operator --(){
--real; }
void operator --(int){ real--; } void operator ++(int){ real++; } void display(){
cout<<"complex number is "<< real<< "+"<< imaginary<< "i"<< endl;
 


};
int main()
{ int real,imaginary;
cout<<"enter real and imaginary value :";


cin>>real>>imaginary; complex c1(real, imaginary); cout<<"before using operator"<<endl; c1.display();
--c1;
cout<<"after using pre-decrement operator"<<endl; c1.display();
++c1;
cout<<"after using pre-increment operator"<<endl; c1.display(); 
c1--;
cout<<"after using post-decrement operator"<<endl; c1.display(); 
c1++;
cout<<"after using post-increment operator"<<endl; c1.display(); 
return 0;}
