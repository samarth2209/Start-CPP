//task to make a class which returns student data including name , class roll no , E-mail
#include <iostream>
#include <string>
using namespace std ;
//class to get the student information ike name  , class , Roll_no , Email ....
class task{
    //private 
    private : 
    string name ;
    string Class ; 
    int Roll_no ;
    string Email ; 
    //public
    public : 
    void get() {
        cout << " Enter your details like Name , Class , Roll_no , Email " <<endl ;
        cin >> name >> Class >> Roll_no >> Email ;
        
    }

    void display(){
        cout << "Enter the Name :  " << name << endl ; 
        cout << "Enter the Class :  " << Class<< endl ; 
        cout << "Enter the Roll_no :  " << Roll_no << endl ; 
        cout << "Enter the Email :  " << Email << endl ; 
    }
};
//main function 
int main(){
    task t1 , t2 ;
    t1.get();
    t2.get();
    t1.display();
    t2.display();

    return 0 ; 
}