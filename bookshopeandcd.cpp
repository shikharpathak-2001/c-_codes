#include <iostream>
using namespace std;

class media{
    public:
    string title;
    string author;
    
    virtual void read(int x){
    }
    virtual void display(){
    }
};

class book: public media{
    public:
    int nopg;
    
    void read(int pages){
        nopg = pages;
    }
    void display(){
        cout<<"------******************------"<<endl;
        cout<<"TITLE : "<<title<<endl;
        cout<<" AUTHOR : "<< author<<endl;
        cout<<"NO OF PAGES : "<<nopg<<endl;
        cout<<"------******************------"<<endl;
    }
};

class tape: public media{
    public:
    int duration;
    
    void read(int tim){
        duration = tim;
    }
    
    void display(){
        cout<<"------******************------"<<endl;
        cout<<"TITLE - "<<title<<endl;
        cout<<" AUTHOR - "<< author<<endl;
        cout<<"PLAYING TIME IN MINUTES - "<<duration<<endl;
        cout<<"------******************------"<<endl;
    }
};

int main()
{
    media *m1;
    book b1;
    m1 = &b1;
    media *m2;
    tape t1;
    m2 = &t1;
    
    b1.title = "1st book";
    b1.author = "ricardo";
    m1->read(400);
    m1->display();
    
    t1.title = "1st tape";
    t1.author = "ricardo";
    m2->read(180);
    m2->display();
    
    media *m3;
    book b2;
    m3 = &b2;
    media *m4;
    tape t2;
    m4 = &t2;
    
    b2.title = "2nd book";
    b2.author = "ricardo";
    m3->read(1400);
    m3->display();
    
    t2.title = "2nd tape";
    t2.author = "ricardo";
    m4->read(1180);
    m4->display();
    
    
    return 0;
}