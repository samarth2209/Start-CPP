#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
    string name;
    string Class;
    string rollno;
    string email;
    void getDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Class: "<<Class<<endl;
        cout<<"Roll Number: "<<rollno<<endl;
        cout<<"Email: "<<email<<endl;
    }
};
int main(){
    Student upender;
    upender.name = string("Dev kumar");
    upender.Class = string("B.Tech CSE");
    upender.rollno = string("2003203");
    upender.email = string("thedevkumar9@gmail.com");
    upender.getDetails();
    return 0;
}
