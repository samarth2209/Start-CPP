#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    int studentClass;
    int roolNo;
    string email;

public:
    void setData()
    {
        name = "Harshil";
        studentClass = 12;
        roolNo = 2002848;
        email = "harshilsharmaa0@gmail.com";
    }

    string getName()
    {
        return name;
    }

    int getClass()
    {
        return studentClass;
    }

    int getRoolNo()
    {
        return roolNo;
    }

    string getEmail()
    {
        return email;
    }
};

int main()
{

    Student s1;
    s1.setData();
    cout << "Name: " << s1.getName() << endl;
    cout << "Class: " << s1.getClass() << endl;
    cout << "Rool No.: " << s1.getRoolNo() << endl;
    cout << "Email: " << s1.getEmail() << endl;

    return 0;
}