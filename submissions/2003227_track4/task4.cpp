#include<iostream>

using namespace std;

void returnSum(int n){
	cout<<n*(n+1)/2;
}
int main(){
	int n;
	cout<<"Enter n:";
	cin>>n;
    cout<<"Sum is:";
	returnSum(n);
	return 0;
}

