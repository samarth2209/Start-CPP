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
    Student Student;
    Student.name = string("Mayank");
    Student.Class = string("CSE");
    Student.rollno = string("2003227");
    Student.email = string("mayank@gmail.com");
    Student.getDetails();
    return 0;
}
