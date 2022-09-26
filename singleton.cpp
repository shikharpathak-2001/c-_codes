#include <iostream> 
using namespace std; 
class Singleton {
static Singleton *inst; int value; Singleton() {

value = 0;
}

public:
static Singleton *getinst() 
{ if (!inst)

inst = new Singleton; 
return inst;
}
int getvalue()
{ return this -> value;}
void setvalue(int value) { this -> value = value;
}
};

Singleton *Singleton::inst = 0; 
int main(){
Singleton *s = s->getinst(); 
cout << s->getvalue() << endl; s->setvalue(100);
cout << s->getvalue() << endl; 
return 0;
}

