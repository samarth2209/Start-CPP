

#include<iostream>
using namespace std;
//Function to print the sum of n natural nnumbers till N
void summ(int N){
	//print the sum of n natural numbers 
    int m = N* (N+1) /2;
	cout<<  m << endl ;
}

int main(){
	
	int N ; 
    cout << " Enter the value of upto which we have to find the sum " <<  endl ; 
    cin >> N ; 
	
	//calling of function 
    summ(N);
    return 0 ;
	
}