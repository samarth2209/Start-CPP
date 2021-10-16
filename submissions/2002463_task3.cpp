#include <iostream>
using namespace std;

void isostriangle(int n){
    int i, j;
    
    for(int i=n; i>0; i--){
        
        for(int j=0; j<=n; j++){

            if (j>=i){
                cout<<" *";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    
    cout << "Enter number of rows: ";
    cin >> n; //taking input from user for number of rows to be printed of isosceles triangle

    isostriangle(n); //using functon call

    return 0;
}