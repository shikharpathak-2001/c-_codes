#include<iostream> 
using namespace std;

class Complex{ 
private:
int real; int imaginary; public:


Complex(int r = 0, int i = 0){ real = r;
 
imaginary = i;


}
void display()
{ cout<<real<<"+i"<<imaginary<<endl;
}




friend Complex operator+(Complex c1, Complex c2); 
friend Complex operator-(Complex c1, Complex c2);
};




Complex operator+(Complex c1, Complex c2){ Complex temp; temp.real = c1.real + c2.real;


temp.imaginary = c1.imaginary + c2.imaginary;




return temp;
}




Complex operator-(Complex c1, Complex c2){ Complex temp; temp.real = c1.real - c2.real; temp.imaginary = c1.imaginary - c2.imaginary;



return temp;
}




int main(){
Complex c2(89,21), c1(23,22), c3;




c3 = c1 + c2; c3.display(); c3 = c1 - c2; c3.display();
}
