#include <iostream>
using namespace std;

int SumOF(int n){
    int total=0;
    for(int i=1;i<=n;i++)
    total+=i;
    return total;
}
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<"Sum upto n is: "<<SumOF(n);
    return 0;
}
