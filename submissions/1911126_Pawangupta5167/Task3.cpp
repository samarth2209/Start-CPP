#include <iostream>
using namespace std;

int main()
{
   int n = 1;

   cout << "Isosceles Triangle :" << endl;

   for (int i = 1; i <= 5; i++)
   {
      for (int j = 4; j >= i; j--)
      {
         cout << " "; // Prints Space Here
      }
      for (int k = 0; k < n; k++)
      {
         cout << "*"; // Printsasterisk here
      }
      cout << endl; //Adds a New line
      n = n + 2;
   }

   return 0;
}
