#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int standard;
    int roll;
    char mail[50];  
};

int main()
{
    // get inputs from the user
    student s;
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter standard: ";
    cin >> s.standard;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter E-mail: ";
    cin >> s.mail;

    // display information got from the user
    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s.name << endl;
    cout << "Standard: " << s.standard << endl;
    cout << "Roll Number: " << s.roll << endl;
    cout << "E-mail: " << s.mail << endl;
}