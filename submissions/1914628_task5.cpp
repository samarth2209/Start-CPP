#include<iostream>
using namespace std;
class Student
{
private:
    int Class;
    int Rollno;
    string Name;
    string Email;
public:
    Student()
    {
        Name= "xyz";
        Rollno= 123;
        Class= 12;
        Email= "xyz@gmail.com";
    }
    void put_data(int Class,int Rollno,string Name,string Email)
    {
        this->Class= Class;
        this->Rollno= Rollno;
        this->Name= Name;
        this->Email= Email;
    }
    void show_data()
    {
        cout<<"\nName : "<<Name<<endl;
        cout<<"Roll No. : "<<Rollno<<endl;
        cout<<"Class : "<<Class<<endl;
        cout<<"E-mail : "<<Email<<endl;
    }
};
int main()
{
    int total, Class, Rollno;
    string Name, Email;
    cout<<"Enter total number of students = ";
    cin>>total;
    Student obj[total];
    for(int i=0;i<total;++i)
    {
        cout<<"\n***** ENTER DETAILS FOR STUDENT "<<i+1<<" *****";
        cout<<"\n\nEnter name : ";
        getline(cin>>ws, Name);
        cout<<"\nEnter Roll No. : ";
        cin>>Rollno;
        cout<<"\nEnter Class : ";
        cin>>Class;
        cout<<"\nEnter E-mail : ";
        cin>>Email;
        obj[i].put_data(Class, Rollno, Name, Email);
    }
    cout<<"\n";
    for(int i=0;i<total;++i)
    {
        cout<<"\n***** DETAILS OF STUDENT "<<i+1<<" *****"<<endl;
        obj[i].show_data();
    }
    return 0;
}
