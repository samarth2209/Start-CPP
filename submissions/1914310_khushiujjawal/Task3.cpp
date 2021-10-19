#include <iostream>
using namespace std;

int main()
{

   int n = 1;

   cout << "Isosceles Triangle" << endl;

   for (int i = 1; i <= 5; i++)
   {
      for (int j = 4; j >= i; j--)
      {
         cout << " "; // Printing Space Here
      }
      for (int k = 0; k < n; k++)
      {
         cout << "*"; // Printing asterisk here
      }
      cout << endl; // new line
      n = n + 2;
   }

   return 0;
}