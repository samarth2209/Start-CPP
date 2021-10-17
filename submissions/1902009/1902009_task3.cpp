#include<iostream>
using namespace std;
int main() {
       int value;
       cout << "Enter the size = ";
       cin >> value;
       int space = value;
       for (int i = 0; i < value; i++) {
              for (int j = space; j > 0; j--) {
                     cout << " ";
              }
              for (int star = 0; star <= i * 2; star++) {
                     cout << "*";
              }
              space--;
              cout << endl;
       }
       return 0;
}