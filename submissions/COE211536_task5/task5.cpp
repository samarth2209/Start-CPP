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
    // Creating a Student type object.
    Student upender;
    // Assigning values.
    upender.name = string("Upender Singh Lakhwan");
    upender.Class = string("B.Tech CSE");
    upender.rollno = string("COE211536");
    upender.email = string("lakhwanus009@gmail.com");
    // Using a function to get details.
    upender.getDetails();
    return 0;
}