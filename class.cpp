#include <iostream>
  using namespace std;  
void swap(int *a, int *b); 
int main()
{
   int x;
   int y;
   cout<<"please enter the first valure:";
   cin >>x;
   cout<<"please enter the second value";
   cin>>y;
   cout<<"\nBefore swap, value of x :"<<x;
   cout<<"\nBefore swap, value of y :"<<y;

   swap(&x, &y);//calling function 

   cout<<"\nAfter swap, value of x : "<<x;
   cout<<"\nAfter swap, value of y : "<<y;
   
   return 0;
 
}
void swap(int *a, int *b) 
 {
   int temp;

   temp = *a; 
   *a = *b; 
   *b = temp; 
  
}
