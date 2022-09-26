#include<iostream>
using namespace std;

class media 
{
    public 
    string *title ;
    int *price;
    media ( char*s, int p)
    {
        title = new char [strlen(s)+1];
        strcpy (title ,s );
        price = p;
    }
    virtual void display () = 0; 
};
class book : public media 
{
int pages; 
public: 
book(char*s, double p, int pg): media (s,p)
{
    pages= pg;
}
void dispay()
{
    cout<<"book details:"<<endl;
    cout<<"title :"<<title<<endl;
    cout<<"price:"<<price<<endl;
    cout<<"no od pages:"<<pages<<endl;
}
};
class tape : public media 
{
    int duration; 
    public : 
    tape (char *s, double p, int dr): media(s,p)
    {
        duration = dr;
    }
    void display ()
    {
        cout <<"tape display : "<<endl;
        cout<< "title : "<<title <<endl;
        cout<<"price:"<<price<<endl;
        cout<<"duration:"<<duration <<endl;
    }
};
int main()
{
    media *ptr;
    class book b("comics",23.33,400);
    class tape t("homework",63.19,80);
    ptr = &b;
    ptr -> display();
    ptr = &t;
    ptr -> display ();
    return 0;
}