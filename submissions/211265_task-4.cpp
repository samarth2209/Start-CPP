#include <iostream>

using namespace std;

int add(int n);

int main ()
{
    int n;

    // get input from the user
    cout << "Enter a positive integer: ";
    cin >> n;

    // print sum upto n numbers
    cout << "Sum =  " << add(n);

    return 0;
}

int add(int n)
{
    if(n != 0)
        return n + add(n - 1);
    return 0;    
}