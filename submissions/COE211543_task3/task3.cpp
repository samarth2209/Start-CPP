#include <iostream>
using namespace std;
//source code to print the isoceles traingle to print the stars .... "*"
 
//function to print the isocellees traingle .... using starts 
void isocelesstraingle( int num )
{
    
    int m = 2 * num - 2;

    // outer for loop 
    for (int i = 0; i < num; i++) {
        // inner loop for spacing 
        for (int j = 0; j < m; j++)
            cout << " ";
        m = m- 1;
 
        //loop to print stars 
        for (int j = 0; j <= i; j++) {
            
            cout << "* ";
        }
        cout << endl;
    }
}
 
int main()
{
    //main function 
    int num ; 
    cout << " Enter the value of n " << endl ;
    cin >> num ; 

   
    //function call 
    isocelesstraingle( num );
    return 0;
}