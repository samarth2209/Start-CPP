#include <iostream>
#include <string>
using namespace std;

class Student
{
   string name;
   int studentClass;
   int rollNo;
   string email;

public:
   void setData()
   {
      name = "KHUSHI UJJAWAL";
      studentClass = 10;
      rollNo = 1914310;
      email = "khushiujjawal187@gmail.com";
   }

   string getName()
   {
      return name;
   }

   int getClass()
   {
      return studentClass;
   }

   int getRollNo()
   {
      return rollNo;
   }

   string getEmail()
   {
      return email;
   }
};

int main()
{

   Student S1;
   S1.setData();
   cout << "Name: " << S1.getName() << endl;
   cout << "Class: " << S1.getClass() << endl;
   cout << "Roll No.: " << S1.getRollNo() << endl;
   cout << "Email: " << S1.getEmail() << endl;

   return 0;
}