#include<iostream>
using namespace std; 
void decrement(int n)
{
n++;
}
void refrencedecrement(int &n)
{
n--;
}
int main()
{


int n=29; decrement(n);
cout<<n<<endl;
refrencedecrement(n); cout<<n<<endl;
}
