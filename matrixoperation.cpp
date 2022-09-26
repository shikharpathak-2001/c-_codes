#include<iostream> 
using namespace std; 
void show(int a[100][100],int x,int y)
{
for(int i=0;i<x;i++)
{
for(int j=0;j<y;j++) 
cout<<" "<<a[i][j]<<" "; cout<<endl;
}
}

void addition()
{
int a[100][100];
int row,column;
cout<<"\nEnter no. of rows and columns : "; 
cin>>row >> column; cout<<"\nEnter elements : ";
 for(int i=0;i<row;i++)
for(int j=0;j<column;j++) cin>>a[i][j]; int b;
cout<<"\nEnter value to be added : ";

cin>>b;
for(int i=0;i<row;i++)
for(int j=0;j<column;j++) 
a[i][j]+=b; cout<<"\nMatrix after Addition : \n"; 
show(a,row,column);
}
void subtraction()
{
int a[100][100];
int row,column;
cout<<"\nEnter no. of rows and columns : "; 
cin>>row >> column; cout<<"\nEnter elements : "; 
for(int i=0;i<row;i++)
for(int j=0;j<column;j++) cin>>a[i][j]; int b;
cout<<"\nEnter value to be subtracted : "; 
cin>>b;
for(int i=0;i<row;i++) 
for(int j=0;j<column;j++) a[i][j]-=b; 
cout<<"\nMatrix after Subtraction : \n"; 
show(a,row,column);
}
void mult()

{
int a[100][100];
int row,column;
cout<<"\nEnter number of rows and columns : "; 
cin>>row >> column; cout<<"\nEnter elements : "; 
for(int i=0;i<row;i++)
for(int j=0;j<column;j++) 
cin>>a[i][j]; int b;
cout<<"\nEnter value to be multiplied : "; 
cin>>b;
for(int i=0;i<row;i++) for(int j=0;j<column;j++) 
a[i][j]*=b; cout<<"\nMatrix after multiplication : \n"; 
show(a,row,column);
}
 
void transpose()
{
int a[100][100];
int trans[100][100]; int m; int i=0; int j=0;
cout<<"\nEnter order of square matrix : "; 
cin>>m;

cout<<"\nEnter elements : "; 
for(i=0;i<m;i++) for(j=0;j<m;j++) cin>>a[i][j]; 
for(i=0;i<m;i++) for(j=0;j<m;j++) trans[i][j]=a[j][i]; cout<<"\nMatrix after Transpose : \n"; 
show(trans,m,m);
}
int main ()
{

int c; while(1)
{	
cout<<"MAIN MENU\n1.Addition\n2.Subtraction\n3.multiplication\n4.Transpose\n5.Exit"; 
cout<<"\nEnter your choice : "; 
cin>>c;
switch(c)
{

case 1: 
addition(); 
break; 
case 2: 
subtraction(); 
break;
case 3:
mult();
break; 
case 4:
transpose(); 
break; 
case 5:
exit(0); 
break; 
default: cout<<"\nINCORRECT choice\n";
} }
return 0;}
