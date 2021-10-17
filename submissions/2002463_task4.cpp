#include <iostream>
using namespace std;

int sumtoN(int n){
    
    /*  Sum of N terms= (n*(n+1))/2  */
    return  n*(n+1)*0.5;
}
int main(){
    int n;

    cout << "Enter N`th term: ";
    cin >> n;
    cout << "Sum of N terms: " << sumtoN(n);
    return 0; 
}