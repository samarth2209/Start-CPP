#include <iostream>
#include <string>
using namespace std;

/*  class to return student data including name, class, roll no & email  */

class StdData{
private:
    string name, aclass, email;
    int rollno;

public:

    void input_data(){
        cout << "Enter student Roll no (number): ";
        cin >> rollno;
        cout << "Enter student Name: ";
        getline(cin, name);
        getline(cin, name);
        cout << "Enter student Class: ";
        getline(cin, aclass);
        cout << "Enter student Email ID: ";
        getline(cin, email);
        cout << endl;
    }
    void print_data(){
        cout << "Roll no.: " << rollno << "\nName: " << name << "\nClass: " << aclass << "\nEmail ID: " << email;
    }
};

int main() {
    int i, n;
    cout << "Enter total number of students: "; 
    cin >> n;
    cout << endl;

    StdData s[n];

    for (i=0; i<n; i++){
        cout<< "Data for student " << i+1 << endl;
        s[i].input_data();
    }

    int x;
    cout << "Enter index of student to print details: ";
    cin >> x;

    cout << "\nPrinting Details: \n";
    s[x-1].print_data();
    
    return 0;
}