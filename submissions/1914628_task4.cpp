// Task 4: To make a function which returns sum upto N numbers.
#include<iostream>
using namespace std;
int sum(int);
int main()
{
    int n;
    cout<<"Enter value of n = ";
    cin>>n;
    cout<<"Sum upto "<<n<<" numbers = "<<sum(n);
    return 0;
}
int sum(int n)
{
    return ((n*(n+1))/2);
}
