#include <iostream> 
#include <cstring> 
using namespace std;

class Person{ 
private:
char name[64], address[64]; int age;
float salary;
float medbnf = 10000;
float retbnf = 50000; float tax;
float baseslr;

public:
Person(){}
Person(char *n, int a, char *add, float s){ strcpy(name, n);
age = a; strcpy(address, add); salary = s;

tax = ((float)5/100) * salary;
baseslr = salary + medbnf + retbnf + tax;

cout<<"-----------Salary Slip----------"<<endl; 
cout<<"Enter Name: "<<name<<endl; 
cout<<"Enter Age: "<<age<<endl; 
cout<<"Enter Address: "<<address<<endl;
cout<<"Base Salary: "<<baseslr<<endl;
cout<<"Medical Benefits:"<<medbnf<<endl;
cout<<"Retirement Benefits:"<<retbnf<<endl;
cout<<"Tax:"<<tax<<endl;
cout<<"Net Salary:"<<salary<<endl;
}

int get_Age(){
 
return age;
}

char* get_Name(){ 
    return name;
}
};

inline void youngold(Person val[], int num){

char youngname[64], oldest_name[64]; int youngest = 0;
int oldest = 0;

for (int i = 1; i < num; i++){
if (val[i].get_Age() < youngest)
{ youngest = i;
}
else if (val[i].get_Age() > oldest){ oldest = i;
}
}

cout<<"\nYoungest person is: "<<val[youngest].get_Name()<<endl; 
cout<<"Oldest person is: "<<val[oldest].get_Name()<<endl;

}

int main(){

Person val[10];

char name[64], address[64]; float salary;
int num, age;

cout<<"Enter the Amount of people (upto 10): "; 
cin>>num;
if (num > 10){ cout<<"Amount exceeded"; 
return 1;
}

for (int i = 0; i < num; i++){
cout<<"\nEnter the name of Person "<<i + 1<<": "; 
cin>>name;
cout<<"Enter the age of "<<name<<": "; 
cin>>age;
cout<<"Enter the address of "<<name<<": "; 
cin>>address;
cout<<"Enter the net salary of "<<name<<": "; 
cin>>salary;
cout<<endl;
 
val[i] = Person(name, age, address, salary);
}

youngold(val, num);

}
