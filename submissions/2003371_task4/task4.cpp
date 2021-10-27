#include<iostream>
using namespace std;
int add(int n){
    int i;
    int sum=0;
    for(i=1;i<=n;i++){
        sum = sum+i;
    }
    return sum;
}
int main()
{
    int n;
    int sum;
    cout<<"Enter a number: ";
    cin>>n;
    sum = add(n);
    cout<<"Sum of all number from 1-"<<n<<" is "<<sum;
    return 0;
}
