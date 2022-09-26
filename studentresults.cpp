#include<iostream>
#include<conio.h>
using namespace std;


class student {
    int rno;
public:

    void getnumber() {
        cout << "Enter Roll No:";
        cin>>rno;
    }

    void putnumber() {
        cout << "\nRoll No:" << rno << "\n";
    }
};

class test : virtual public student {
public:
    int marks;
    int sub1, sub2;


    void getmarks() {
        cout << "Enter Marks\n";
        cout << "subject1:";
        cin>>sub1;
        cout << "subject2:";
        cin>>sub2;
    }

    void putmarks() {
        cout << "\tMarks Obtained\n";
        cout << "\n\tsubject1:" << sub1;
        cout << "\n\tsubject2:" << sub2;
    }
};
class sports : public virtual student {
public:
    int score;

    void getscore() {
        cout << "\nEnter score obtained in sports:";
        cin>>score;
    }

    void putscore() {
        cout << "\n\tmarks obtained in sports is:" << score;
    }
};

class result : public test, public sports {
    int total;
public:

    void display() {
        total = sub1 + sub2 + score;
        putnumber();
        putmarks();
        putscore();
        cout << "\n\tTotal marks obtained : " << total;
    }
};

int main() {
    result obj;
    obj.getnumber();
    obj.getmarks();
    obj.getscore();
    obj.display();
    getch();
}
