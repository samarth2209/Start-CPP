#include <iostream>
using namespace std;

int main() {
    //defining datatypes of variables
    int a;
    char ch;
    double d;
    short s;
    long l;

    //using sizeof() to get memory size of each data type & using cout to print it.
    cout << "\nSize of int: " << sizeof(a);
    cout << "\nSize of char: " << sizeof(ch);
    cout << "\nSize of double: " << sizeof(d);
    cout << "\nSize of short: " << sizeof(s);
    cout << "\nSize of long: " << sizeof(l); 
    return 0;
}